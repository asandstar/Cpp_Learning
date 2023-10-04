/*
题目内容：输入某学生的数学、语文和英语课程成绩，输出该学生三门课总成绩和平均成绩。
输入格式：输入为实型，用空格分隔
输出格式：输出为实型，保留六位小数，结果每行输出一个
输入样例：90 82 74
输出样例：
246.000000
82.000000
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m, c, e;
    cin >> m >> c >> e;
    double sum, avg;
    sum = m + c + e;
    avg = sum / 3;
    cout << fixed << setprecision(6) << sum << endl;
    cout << fixed << setprecision(6) << avg << endl;
    return 0;
}
