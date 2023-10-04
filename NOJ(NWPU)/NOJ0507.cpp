/*
题目内容：编写一个函数void InsertionSort(int A[],int s,int m)，
能够从数组A第s个（以0为开始）元素起始，连续m个元素使用插入法降序排序。
数组A最多有N（1≤N≤100）个元素，0≤s＜N，且s+m≤N。在主函数输入输出，调用函数InsertionSort求解。
输入格式：第1行输入整型n，第2行给A输入n个整型数据，第3行输入s和m，数据之间用空格隔开。
输出格式：输出排序后的数组A，用空格隔开。
输入样例：
10
1 2 3 4 5 6 7 8 9 10
1 8
输出样例：
1 9 8 7 6 5 4 3 2 10
*/
#include <iostream>
#include <iomanip>
using namespace std;
void InsertionSort(int A[], int s, int m)
{
    for (int i = s; i <= m; i++)
    {
        int t = A[i];
        for (int j = i - 1; j >= s; j--)
        {
            if (t > A[j])
            {
                A[j + 1] = A[j];
                A[j] = t;
            }
            else
                break;
        }
    }
}
int main()
{
    int n, i, s, m;
    cin >> n;
    int *A = new int[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    cin >> s >> m;
    InsertionSort(A, s, m);
    for (i = 0; i < n; i++)
        cout << A[i] << ' ';
    delete[] A;
    return 0;
}
