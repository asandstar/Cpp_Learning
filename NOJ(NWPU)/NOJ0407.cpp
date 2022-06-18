#include <iostream>
using namespace std;
int salary(int n)
{
    int i, count;
    int a, b, c, d, e, f;
    int *p = new int[n];
    count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> p[i];
        a = p[i] / 100;
        p[i] = p[i] - a * 100;
        b = p[i] / 50;
        p[i] = p[i] - b * 50;
        c = p[i] / 10;
        p[i] = p[i] - c * 10;
        d = p[i] / 5;
        p[i] = p[i] - d * 5;
        e = p[i] / 2;
        p[i] = p[i] - e * 2;
        f = p[i];
        count = a + b + c + d + e + f + count;
    }
    cout << count;
    delete[] p;
    return 0;
}
int main()
{
    int n, i;

    cin >> n;
    salary(n);

    return 0;
}