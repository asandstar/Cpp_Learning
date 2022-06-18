#include <iostream>
#include <iomanip>
using namespace std;
void BubbleSort(int A[], int s, int m)
{
    int i, j, t;
    for (i = s; i <= m; i++)
        for (j = s; j <= m - i + s - 1; j++)
            if (A[j] < A[j + 1])
                t = A[j], A[j] = A[j + 1], A[j + 1] = t;
}
int main()
{
    int n, i, s, m;
    cin >> n;
    int *A = new int[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    cin >> s >> m;
    BubbleSort(A, s, m);
    for (i = 0; i < n; i++)
        cout << A[i] << ' ';
    delete[] A;
    return 0;
}