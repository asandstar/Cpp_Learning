#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j;

    cin >> n >> m;
    int *A = new int[n * m];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> *(A + i * m + j);
    int s = 0, s0 = 0, s1 = 0, s2 = 0;
    for (j = 0; j < m; j++)
        s = *(A + j) + *(A + (n - 1) * m + j) + s;
    // cout << s << endl;

    for (i = 1; i < n - 1; i++)
        s0 = *(A + m * i) + *(A + m * i + m - 1) + s0;
    // cout << s0 << endl;
    s1 = s + s0;
    // cout << s1 << endl;
    for (i = 1; i < n - 1; i++)
        for (j = 1; j < m - 1; j++)
            s2 = *(A + i * m + j) + s2;
    // cout << s2 << endl;
    cout << s1 - s2;
    delete[] A;
}