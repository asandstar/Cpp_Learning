/*
题目内容：有两个n（1≤n≤100）个元素的一维数组A和B，其中A来自输入，将其“赋值”给B（即元素一一复制到B中），输出B数组下标为奇数的元素。
输入格式：第1行输入整型n，第2行给A输入n个整型数据，元素之间用空格隔开。
输出格式：输出B数组指定元素，元素之间用空格隔开。
输入样例：
5
1 2 3 4 5
输出样例：
2 4
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int *A = new int[n];
    int *B = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    for (j = 1; j < n; j = j + 2)
        cout << B[j] << ' ';
    delete[] A;
    delete[] B;
    return 0;
}
