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