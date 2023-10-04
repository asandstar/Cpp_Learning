/*
题目内容：编写一个函数double avg(int A[],int s,int e)，计算一个N（1≤N≤100）个元素的一维数组A，
从第s个（以0为开始，下同），到第e个元素的平均值，其中0≤s＜e＜N。在主函数输入输出，调用函数avg计算。
输入格式：第1行输入整型n，第2行给A输入n个整型数据，第3行输入s和e，数据之间用空格隔开。
输出格式：输入double型，保留6位小数位。
输入样例：
10
1 2 3 4 5 6 7 8 9 10
1 8
输出样例：
5.500000
*/
#include <iostream>
#include <iomanip>
using namespace std;
double avg(int A[], int s, int e)
{
    int i, sum;
    sum = 0;
    double avg = 0;
    for (i = s; i <= e; i++)
        sum = A[i] + sum;
    avg = sum * 1.0 / (e - s + 1);
    return avg;
}
int main()
{
    int n, i, s, e;
    cin >> n;
    int *A = new int[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    cin >> s >> e;
    cout << fixed << setprecision(6) << avg(A, s, e);
    delete[] A;
    return 0;
}
