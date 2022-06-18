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