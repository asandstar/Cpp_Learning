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