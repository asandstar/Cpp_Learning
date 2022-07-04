#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define len sizeof(student)
#define true 1

//定义需要储存学生信息的结构体
struct student
{
    int num;         //学号
    char name[20];   //姓名
    char sex;        //性别
    float c_program; // c语言成绩
    float math;      //数学成绩
    float engl;      //英语成绩
    float aver;      //平均成绩
    struct student *next;
};
typedef struct student student;
typedef struct student *student_link;

//学生信息链表的头结点
struct student_info
{
    int stu_num;       //学生总人数
    student_link next; //指向第一个学上
};
typedef struct student_info *stu_info;

//函数声明
void menu();
int creat(stu_info head);
void output_stu(stu_info head);
void add_stu(stu_info head);
void search_stu(stu_info head);
void search_num(stu_info head);  //按照学号查找
void search_name(stu_info head); //按照姓名查找
void delete_stu(stu_info head);
void delete_num(stu_info head);
void delete_name(stu_info head);

int main()
{
    struct student_info new_student_list;
    struct student_info *head;
    int point;
    head = &new_student_list;
    head->stu_num = 0;
    menu();
    while (true)
    {
        printf("\n请输入您的操作指令: ");
        scanf("%d", &point);
        switch (point)
        {
        case 1:
            creat(head);
            break;
        case 2:
            output_stu(head);
            break;
        case 3:
            search_stu(head);
            break;
        case 4:
            add_stu(head);
            break;
        case 5:
            delete_stu(head);
            break;
        case 6:
            printf("即将退出程序。");
            return 0;
            break;
        default:
            printf("输入错误！");
            break;
        }
    }
}

//创建菜单函数
void menu()
{
    printf("\n==============欢迎使用学生成绩管理系统==============");
    printf("\n\n\t\t1.新建学生成绩表");
    printf("\n\n\t\t2.输出学生成绩表");
    printf("\n\n\t\t3.查询学生成绩");
    printf("\n\n\t\t4.添加学生成绩");
    printf("\n\n\t\t5.删除学生成绩");
    printf("\n\n\t\t6.退出管理系统");
}

//创建学生链表
int creat(stu_info head)
{
    student_link p, q;
    q = head->next;
    head->next = NULL;
    p = (student_link)malloc(len);
    printf("\n===========退出学生信息管理系统方法：学生的学号为0则会退出输入！=========");
    printf("\n\n准备录入学生信息：\n\n");
    printf("请依次输入：学号 姓名 性别(男/女)\n ");
    scanf("%d %s %c", &p->num, p->name, &p->sex);
    if (p->num == 0)
        return 0;
    while (p->num != 0)
    {
        fflush(stdin);
        printf("请依次输入：C语言成绩 数学成绩 英语成绩:\n");
        scanf("%f %f %f", &p->c_program, &p->math, &p->engl);
        p->aver = (p->c_program + p->math + p->engl) / 3;
        if (head->next == NULL)
        {
            q = p;
            head->next = q;
            head->stu_num++;
            p = (student_link)malloc(len);
            printf("请依次输入：学号 姓名 性别(男/女)\n");
            scanf("%d %s %c", &p->num, p->name, &p->sex);
        }
        else
        {
            q->next = p;
            q = p;
            head->stu_num++;
            p = (student_link)malloc(len);
            printf("请依次输入：学号 姓名 性别(男/女)\n");
            scanf("%d %s %c", &p->num, p->name, &p->sex);
        }
    }
    q->next = NULL;
    return 0;
}

void output_stu(stu_info head) //链表头指针作为函数参数
{
    student_link temp;
    temp = head->next;
    printf("\n该列表共包含%d名学生", head->stu_num);
    printf("\n\n\n********************学生成绩信息表*********************\n\n\n");
    printf("学号\t\t姓名\t\t性别\t\t程序设计\t高等数学\t大学英语\t平均成绩\n");
    while (temp != NULL)
    {
        printf("%-12d%-12s%-12c%-12.2f%-12.2f%-12.2f%-12.2f\n", temp->num, temp->name, temp->sex,
               temp->c_program, temp->math, temp->engl, temp->aver);
        temp = temp->next;
    }
}

//查找学生信息，查找方式包括：1.按照学号查找；2.按照姓名查找
void search_stu(stu_info head)
{
    int choice = -1;
    if (head->next == NULL)
    {
        printf("学生列表为空\n");
    }
    else
    {
        fflush(stdin);
        printf("\n请输入查找方式：1.按照学号查找；2.按照姓名查找；0.取消 : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            search_num(head);
            break;
        case 2:
            search_name(head);
            break;
        case 0:
            break;
        default:
            search_stu(head);
            break;
        }
    }
}

void search_num(stu_info head) //按照学号查找
{
    int target_num; //查询目标的学号
    student_link p; //循环结点
    p = head->next;
    printf("\n请输入查询学生的学号：");
    scanf("%d", &target_num);
    //注意：两个判断条件一定不能互换位置，原因：当p指向NULL之后，p就没有num成员了，
    //所以先判断p->num != target_num会导致程序陷入这里的while循环条件判断语句。
    while (p != NULL && p->num != target_num)
        p = p->next;
    if (p == NULL)
        printf("\n列表中没有这名学生的信息。\n");
    else
    {
        printf("\n学号\t姓名\t性别\t程序设计    高等数学    大学英语    平均成绩\n");
        printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", p->num,
               p->name, p->sex, p->c_program, p->math, p->engl, p->aver);
    }
}

void search_name(stu_info head) //按照姓名查找
{
    student_link p;
    char name[20];
    int count = 0; //记录搜索到的学生的数量，即同名人数
    p = head->next;
    printf("\n请输入被查询学生的姓名：");
    scanf("%s", name);
    printf("\n学号\t姓名\t性别\t程序设计    高等数学    大学英语    平均成绩\n");
    while (p != NULL)
    {
        if (strcmp(p->name, name) == 0)
        {
            printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", p->num,
                   p->name, p->sex, p->c_program, p->math, p->engl, p->aver);
            count++;
            p = p->next; //继续查找，防止重名
        }
        else
            p = p->next;
    }
    if (count == 0)
        printf("列表中没有这名学生的信息。\n");
}

//添加学生信息
void add_stu(stu_info head)
{
    student_link p, q;
    int index;
    q = head->next;
    p = (student_link)malloc(len); //填写新加入学生的基本信息
    printf("\n输入新加入学生的详细信息，输入内容如下：\n");
    printf("\n依次输入：学号 姓名 性别(m/w)\n");
    scanf("%d %s %c", &p->num, p->name, &p->sex);
    fflush(stdin);
    printf("\n依次输入：C语言成绩 数学成绩 英语成绩\n");
    scanf("%f %f %f", &p->c_program, &p->math, &p->engl);
    p->aver = (p->c_program + p->math + p->engl) / 3; //填写结束
    printf("\n请输入新同学的位置：");
    scanf("%d", &index);
    if (index <= 0)
    {
        printf("\n插入位置输入错误");
    }
    else if (index == 1) //插入到学生列表第一个位置
    {
        p->next = head->next;
        head->next = p;
        head->stu_num++;
    }
    else if (index > 1 && index <= head->stu_num) //插入到中间位置的第index个
    {
        for (int i = 1; i < index - 1; i++)
            q = q->next;
        p->next = q->next; // p是新开辟结点，q是要插入位置的直接前置结点
        q->next = p;
        head->stu_num++;
    }
    else if (index > head->stu_num) //插入到末尾
    {
        while (q->next != NULL)
            q = q->next;
        q->next = p;
        p->next = NULL;
        head->stu_num++;
    }
}

//删除指定学生的信息
void delete_stu(stu_info head)
{
    int choice = -1;
    if (head->next == NULL)
        printf("学生列表为空\n");
    else
    {
        printf("\n请输入查找方式：1.按照学号查找；2.按照姓名查找；0.取消 : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            delete_num(head);
            break;
        case 2:
            delete_name(head);
            break;
        case 0:
            break;
        default:
            delete_stu(head);
            break;
        }
    }
}

//按照学号查找删除
void delete_num(stu_info head)
{
    int num;        //学生学号
    student_link p; //指向删除节点的前驱结点
    student_link q; //指向删除结点
    p = head->next;
    printf("\n请输入准备删除的学生的学号：");
    scanf("%d", &num);
    if (p->num == num) //，判断是否是第一个结点，这里p指向删除结点
    {
        printf("该名同学信息如下：\n");
        printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", p->num,
               p->name, p->sex, p->c_program, p->math, p->engl, p->aver);
        head->next = p->next;
        free(p);
        printf("该同学信息已经删除。\n");
        head->stu_num--;
    }
    else
    {
        while (p->next != NULL && p->next->num != num) //这里p指向删除结点的直接前驱结点
            p = p->next;
        if (p->next == NULL)
            printf("查无此人\n");
        else
        {
            q = p->next; // q指向删除结点
            printf("该名同学信息如下：\n");
            printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", q->num,
                   q->name, q->sex, q->c_program, q->math, q->engl, q->aver);
            p->next = q->next;
            free(q);
            printf("该同学信息已经删除。\n");
            head->stu_num--;
        }
    }
}

//按照姓名查找删除
void delete_name(stu_info head)
{
    student_link p, q;
    char name[20];
    int count = 0; //记录同名人数
    printf("请输入需要删除的学生姓名：");
    scanf("%s", name);
    p = head->next;
    if (strcmp(p->name, name) == 0)
    {
        printf("该名同学信息如下：\n");
        printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", p->num,
               p->name, p->sex, p->c_program, p->math, p->engl, p->aver);
        head->next = p->next;
        printf("学生%s的信息已经被删除。\n", p->name);
        free(p);
        head->stu_num--;
    }
    else
    {
        q = p->next;
        while (q != NULL)
        {
            if (strcmp(q->name, name) == 0)
            {
                printf("该名同学信息如下：\n");
                printf("%-10d%-10s%-10c%-8.2f%-8.2f%-8.2f%-8.2f\n", q->num,
                       q->name, q->sex, q->c_program, q->math, q->engl, q->aver);
                p->next = q->next;
                printf("学生%s的信息已经被删除。\n", q->name);
                free(q);
                q = p->next;
                count++;
                head->stu_num--;
            }
            else
            {
                p = p->next;
                q = q->next;
            }
        }
        if (count == 0)
            printf("查无此人。\n");
    }
}
