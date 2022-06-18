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