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