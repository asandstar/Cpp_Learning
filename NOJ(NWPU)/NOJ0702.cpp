#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, i, num;
    cin >> n;
    int *p = new int[100];
    i = 0;
    while (n != 0)
    {
        num = n % 2;
        n = n / 2;
        p[i] = num;
        i = i + 1;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << p[j];
    delete[] p;
    return 0;
}