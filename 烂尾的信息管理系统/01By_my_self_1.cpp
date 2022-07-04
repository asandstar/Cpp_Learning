#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
// 循环链表结构 head->[,->next]...[data0,->next][data1,->next]...[datan,->head]
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
struct STU_SCORE *head, *tail;
int coun = 0;
void input();
int mainMenu();
int stuReg(STU_SCORE *pHead);
int selCourse(STU_SCORE *pHead);
int inputData(STU_SCORE *pHead);
int scoreSort(STU_SCORE *pHead);
int scoreQuery(STU_SCORE *pHead);
int modify(STU_SCORE *pHead);
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
    STU_SCORE *head = (STU_SCORE *)malloc(sizeof(STU_SCORE));
    head->stuId = -1;
    head->pnext = head;
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
//新生注册：建立学生信息链表，从键盘输入学生姓名学号，插入到链表中。
int stuReg(STU_SCORE *pHead)
{
    cout << "注意：新生注册学号不能重复！\n";

start:
    struct STU_SCORE *p;
    head = tail = NULL;
    input();
    coun = coun + 1;
    cout << "继续新的注册?";
    char c;
    cin >> c;
    if (c == 'y' || c == 'Y')
        goto start;
    return 0;
}
void input()
{
    int stuId;
    head = tail = NULL;
    while ((cin >> stuId) && stuId != 0)
    {
        struct STU_SCORE *p = (struct STU_SCORE *)malloc(sizeof(struct STU_SCORE));
        p->stuId = stuId;
        cin >> p->name >> p->stuId;
        if (head == NULL)
        {
            head = tail = p;
        }
        else
        {
            tail->pnext = p;
            tail = p;
        }
    }
}

//学生选课
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

                    pcourse->pnext = pNewcourse;
                    pStu->scoreHead = pNewcourse;
                    pcourse->pnext = NULL;
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
//学生成绩输入
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
        cout << cid << "课程成绩已输入完成!"
             << "\n";
    cout << "继续其他课程成绩输入?";
    char c;
    cin >> c;
    if (c == 'y' || c == 'Y')
        goto start;
    return 0;
}
//课程成绩查询
int scoreQuery(STU_SCORE *pStuHead)
{
    int id;
    cin >> id;
    STU_SCORE *p = pStuHead;
    STU_SCORE *pStu = pStuHead->pnext;
    SCORE *pcourse = pStu->scoreHead->pnext;

    while (p->stuId != id)
    {
        while (pcourse != NULL)
        {
            cout << "学号:" << pStu->stuId << "  姓名:" << pStu->name;
            cout << "  成绩：" << pcourse->score;
            pcourse = pcourse->pnext;
        }
        break;
    }

    p = p->pnext;
}
//课程成绩修改
int modify(STU_SCORE *pStuHead)
{
    int sId;
    cout << "学号：";
    cin >> sId;
    int cId;
    cout << endl
         << "课程号：";
    cin >> cId;
    STU_SCORE *p = pStuHead;
    STU_SCORE *pStu = pStuHead->pnext;
    SCORE *pcourse = pStu->scoreHead->pnext;
    int scr;
    while (p->stuId != sId)
    {
        if (pcourse->courseId == cId)
        {
            cout << "原成绩：" << pcourse->score << "  成绩修改为：";
            cin >> scr;
            pcourse->score = scr;
        }
        else
        {
            pcourse = pcourse->pnext;
        }

        p = p->pnext;
    }

    return 0;
}
