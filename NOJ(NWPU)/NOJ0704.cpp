/*
题目内容：设有学生信息如下：学号（长整型）、姓名（字符串）、年龄（整型），
英语、数学、语文、政治、物理、化学、计算机成绩（均为实型），
总分（实型）、平均分（实型）。编写程序输入10个学生信息，
计算每个学生的总分、平均分，然后输出总分最高的学生记录。
输入格式：输入10行记录，用空格分隔。
输出格式：输出总分最高的学生记录，成绩保留2位小数，用空格分隔。
输入样例：
101 zhang 18 76  83  74  80  87  95  78
102 chen  19 86  73  83  72  66  98  60
103 yuan  20 83  99  82  74  85  67  98
104 zhou  21 96  64  95  94  83  71  60
105 huang 22 84  94  83  98  77  95  95
106 jiang 23 70  63  75  71  90  67  84
107 ding  24 63  67  67  68  64  91  99
108 qin   25 68  64  67  78  66  88  77
109 deng  26 67  70  88  66  85  92  88
110 gao   27 73  95  84  77  79  82  64
输出样例：
105 huang 22 84.00 94.00 83.00 98.00 77.00 95.00 95.00
*/
#include <iostream>
#include <iomanip>
using namespace std;
struct student
{
    long int id;
    char name[5];
    int age;
    double ying, shu, yu,
        zheng, wu,
        hua, ji;
    double sum, avg;
};
void input(struct student stu[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> stu[i].id >> stu[i].name >> stu[i].age >> stu[i].ying >> stu[i].shu >> stu[i].yu >> stu[i].zheng >> stu[i].wu >> stu[i].hua >> stu[i].ji;
    }
}
void print(struct student stu[], int n)
{

    cout << stu[0].id << ' ' << stu[0].name << ' ' << stu[0].age;
    cout << fixed << setprecision(2)
         << ' ' << stu[0].ying << ' ' << stu[0].shu << ' ' << stu[0].yu
         << ' ' << stu[0].zheng << ' ' << stu[0].wu
         << ' ' << stu[0].hua << ' ' << stu[0].ji;
}

void sum_and_avg(struct student stu[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        stu[i].sum = stu[i].ying + stu[i].shu + stu[i].yu +
                     stu[i].zheng + stu[i].wu +
                     stu[i].hua + stu[i].ji;
        stu[i].avg = stu[i].sum / 7.0;
    }
}
int main()
{
    int index;
    struct student stu[10];
    struct student max;
    void input(struct student[], int);
    void print(struct student[], int);
    input(stu, 10);
    sum_and_avg(stu, 10);
    int i, j;
    struct student temp;
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (stu[i].sum < stu[j].sum)
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
    print(stu, 10);
    return 0;
}
/*void print(struct student stu[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << stu[i].id << ' ' << stu[i].name << ' ' << stu[i].age;
        cout << fixed << setprecision(2)
             << ' ' << stu[i].ying << ' ' << stu[i].shu << ' ' << stu[i].yu
             << ' ' << stu[i].zheng << ' ' << stu[i].wu
             << ' ' << stu[i].hua << ' ' << stu[i].ji
             << ' ' << stu[i].sum << ' ' << stu[i].avg;
    }
}
void print(struct student stu)
{

    cout << stu.id << ' ' << stu.name << ' ' << stu.age;
    cout << fixed << setprecision(2)
         << ' ' << stu.ying << ' ' << stu.shu << ' ' << stu.yu
         << ' ' << stu.zheng << ' ' << stu.wu
         << ' ' << stu.hua << ' ' << stu.ji
         << ' ' << stu.sum << ' ' << stu.avg;
}
*/
