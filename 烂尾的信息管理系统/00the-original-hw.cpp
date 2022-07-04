#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#define len sizeof(STU_SCORE)
using namespace std;

// 链表结构 head->[,->next]...[data0,->next][data1,->next]...[datan,->head]

struct SCORE
{
  int courseId;
  int score;
  SCORE *pnext;
};
struct STU_SCORE
{
  char name[16];
  int stuId;
  SCORE *scoreHead; //学生课程成绩列表
  struct STU_SCORE *pnext;
};
typedef struct STU_SCORE STU_SCORE;
typedef struct STU_SCORE *student_link;

//学生信息链表的头结点
struct student_info
{
  int stu_num;       //学生总人数
  student_link next; //指向第一个学上
};
typedef struct student_info *stu_info;

int mainMenu();
int stuReg(stu_info head);
int selCourse(stu_info head);
int inputData(stu_info head);
int scoreSort(stu_info head);
int scoreQuery(stu_info head);
int modify(stu_info head);

enum MAIN_CMD
{
  REG = 0,
  SEL = 1,
  INPUT = 2,
  QUERY = 3,
  MODI = 4,
  EXIT = 5
};

int main(int argc, char *argv[])
{
  struct student_info new_student_list;
  struct student_info *head;
  head = &new_student_list;
  head->stu_num = 0;
  while (1)
  {
    int cmd = mainMenu();
    switch (cmd)
    {
    case REG:
      stuReg(head);
      break;
    case SEL:
      selCourse(head);
      break;
    case INPUT:
      inputData(head);
      break;
    case QUERY:
      scoreQuery(head);
      break;
    case MODI:
      modify(head);
      break;
    case EXIT:
      return 0;
    }
  }

  return 0;
}

int mainMenu()
{
  system("cls");
  cout << "\t\t《学生成绩管理系统》\n";
  cout << " \t\t[0]新生注册\n";
  cout << " \t\t[1]选课登记\n";
  cout << " \t\t[2]学生成绩输入\n";
  cout << " \t\t[3]成绩查询\n";
  cout << " \t\t[4]修改成绩\n";
  cout << " \t\t[5]退出\n";
  cout << "命令? ";
  int cmd;
  cin >> cmd;
  return cmd;
}

// 0新生注册：建立学生信息链表，从键盘输入学生姓名学号，插入到链表中。
int stuReg(stu_info head)
{
  cout << "注意：新生注册学号不能重复！\n";
start:

  student_link p, q;
  q = head->next;
  head->next = NULL;
  p = (student_link)malloc(len);
  cout << "输入学生姓名学号" << endl;
  cin >> p->name >> p->stuId;
  cout << "继续新的注册?";
  char c;
  cin >> c;
  if (c == 'y' || c == 'Y')
    goto start;
  return 0;
}

// 1学生选课
int selCourse(STU_SCORE *pHead)
{
start:
  int cid;
  cout << "课程号：";
  cin >> cid;
  cout << "输入选择该课程的学生学号\n";
  int stuId;
  cin >> stuId;
  while (stuId > 0)
  {
    STU_SCORE *pStu = pHead->pnext;

    while (pStu != pHead) //链表已有记录
    {
      if (pStu->stuId == stuId) //有该学号
      {
        bool be = false;
        SCORE *pcourse = pStu->scoreHead->pnext;
        while (pcourse != pStu->scoreHead) //已有选课
        {
          if (pcourse->courseId == cid)
          {
            be = true; ////已有该选课
            break;
          }
          pcourse = pcourse->pnext;
        }
        if (!be)
        { //还没有选此课程
          SCORE *pNewcourse = (SCORE *)malloc(sizeof(SCORE));
          pNewcourse->courseId = cid;
          pNewcourse->pnext = pStu->scoreHead->pnext;
          pStu->scoreHead = pNewcourse;
          //{
          // 。。。。。。插入到选课链的头节点后
          //}
        }
      }
      pStu = pStu->pnext;
    }
    cin >> stuId;
  }

  int count = 0;
  STU_SCORE *pStu = pHead->pnext;
  while (pStu != pHead) //链表已有记录
  {
    SCORE *pcourse = pStu->scoreHead->pnext;
    while (pcourse != pStu->scoreHead)
    {
      if (pcourse->courseId == cid)
      {
        count++;
      }
      pcourse = pcourse->pnext;
    }
    pStu = pStu->pnext;
  }
  cout << "共有" << count << "个学生选此课程\n";
  cout << "继续新的选课输入?";
  char c;
  cin >> c;
  if (c == 'y' || c == 'Y')
    goto start;
  return 0;
}

// 2学生成绩输入
int inputData(STU_SCORE *pStuHead)
{

  int count;
start:
  count = 0;
  cout << "课程号：";
  int cid;
  cin >> cid;
  STU_SCORE *pStu = pStuHead->pnext;
  while (pStu != pStuHead) // if链表已有学生记录
  {
    SCORE *pcourse = pStu->scoreHead->pnext;
    while (pcourse != pStu->scoreHead)
    {
      if (pcourse->courseId == cid)
      {
        cout << "学号:" << pStu->stuId << "  姓名:" << pStu->name;
        cout << "  成绩：";
        if (pcourse->score >= 0)
          cout << "已输入";
        else
        {
          cin >> pcourse->score;
          count++;
        }
        break;
      }
      pcourse = pcourse->pnext;
    }
    pStu = pStu->pnext;
  }
  if (count == 0)
    cout << "该课程无学生选！\n";
  else
    cout << cid << "课程成绩已输入完成"
         << "\n";
  cout << "继续其他课程成绩输入?";
  char c;
  cin >> c;
  if (c == 'y' || c == 'Y')
    goto start;
  return 0;
}

// 3课程成绩查询
void scoreQuery(STU_SCORE *pStuHead)
{
}

// 4课程成绩修改
int modify(STU_SCORE *pStuHead)
{
  //{
  //。。。。。。
  //}

  return 0;
}
