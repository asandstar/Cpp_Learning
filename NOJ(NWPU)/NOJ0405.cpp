#include <iostream>
using namespace std;
void change(int &m, int &n)
{
    int t;
    t = m;
    m = n;
    n = t;
}
int secret(int x)
{
    int a, b, c, d;
    a = x / 1000;
    b = x % 1000 / 100;
    c = x % 100 / 10;
    d = x % 10;
    a = (a + 5) % 10;
    b = (b + 5) % 10;
    c = (c + 5) % 10;
    d = (d + 5) % 10;
    change(a, d);
    change(b, c);
    cout << a << b << c << d;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    secret(n);
}