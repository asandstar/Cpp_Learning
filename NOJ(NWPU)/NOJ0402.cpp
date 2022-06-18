#include <iostream>
using namespace std;
int f(int n)
{
    if (n > 1)
        return f(n - 1) * n;
    return 1;
}
int main()
{
    int m, n, co;
    cin >> m >> n;
    co = f(m) / (f(n) * f(m - n));
    cout << co;
}