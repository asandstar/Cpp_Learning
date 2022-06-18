#include <iostream>
#include <iomanip>
using namespace std;
void SelectionSort(int A[], int s, int m)
{
    int i, j, k, t;
    for (i = s; i < m; i++)
    {
        k = i;
        for (j = i + 1; j < m + 1; j++)
            if (A[j] > A[k])
                k = j;

        if (i != k)
            t = A[i], A[i] = A[k], A[k] = t;
    }
}
//找到列表里最大的并放到最前面去
int main()
{
    int n, i, s, m;
    cin >> n;
    int *A = new int[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    cin >> s >> m;
    SelectionSort(A, s, m);
    for (i = 0; i < n; i++)
        cout << A[i] << ' ';
    delete[] A;
    return 0;
}