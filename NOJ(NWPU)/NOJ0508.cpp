/*
题目内容：比基堡海滩有一个有n个触手的恐怖水母，蟹老板希望雇佣一些海绵宝宝把它杀死（即砍掉所有触手）。
现在有m个海绵宝宝可以雇佣，一个能力值为x的海绵宝宝可以砍掉恐怖水母一只直径不超过x的触手，且需要支付x个金币。
如何雇佣海绵宝宝才能杀死水母，并且支付的金币最少？需要注意一个海绵宝宝只能砍掉一只触手，并且不能被雇佣两次。
输入格式：第1行为正整数n和m，第2行为水母n只触手的直径，第3行为m个海绵宝宝的能力值，所有数据用空格间隔。
输出格式：输出最少金币数。如果无解，输出NULL
输入样例：
2 3
5 4
7 8 4
输出样例：
11
*/
#include <iostream>
using namespace std;
void SelectionSort(int A[], int s, int m)
{
    int i, j, k, t;
    for (i = s; i < m; i++)
    {
        k = i;
        for (j = i + 1; j < m + 1; j++)
            if (A[j] < A[k])
                k = j;

        if (i != k)
            t = A[i], A[i] = A[k], A[k] = t;
    }
}
int main()
{
    int n, k, m, sum, add;
    sum = 0;
    add = 0;
    int i, j;
    cin >> n >> k;
    int *d = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    SelectionSort(d, 0, n - 1);

    int *a = new int[k];
    for (j = 0; j < k; j++)
    {
        cin >> a[j];
    }
    SelectionSort(a, 0, k - 1);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (d[i] <= a[j])
            {
                sum = sum + a[j];
                break;
            }
            else
                continue;
        }
    }
    for (i = 0; i < n; i++)
    {
        add += d[i];
    }
    if (sum >= add && n < k)
        cout << sum;
    else
        cout << "NULL";
    delete[] a;
    delete[] d;
}
