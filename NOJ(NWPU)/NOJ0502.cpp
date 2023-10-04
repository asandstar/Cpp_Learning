/*
题目内容：输出一个nxn（1≤n≤100）二维数组A左上角的元素（元素值不超过9）。
输入格式：第1行输入整型n，第2行给A输入nxn个整型数据，元素之间用空格隔开。
输出格式：按要求输出A左上角的元素，确保行列对齐，元素之间用空格隔开。
输入样例：
3
1 2 3 4 5 6 7 8 9
输出样例：
1 2 3
4 5
7
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int *A = new int[n * n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> *(A + i * n + j);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
            cout << *(A + i * n + j) << ' ';
        cout << endl;
    }
    delete[] A;
    return 0;
}
