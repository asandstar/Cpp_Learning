#include <iostream>
using namespace std;
int max(int m, int n, int p)
{
    int big = -1;
    if (m > n)
        big = m;
    else
        big = n;
    if (p > big)
        big = p;

    return big;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, b, c);
    return 0;
}