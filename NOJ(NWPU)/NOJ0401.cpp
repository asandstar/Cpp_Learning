#include <iostream>
using namespace std;
void re(long int m)
{
    if (m < 10)
        cout << m;
    else
    {
        cout << m % 10;
        return re(m / 10);
    }
}
int main(void)
{
    long int n;
    cin >> n;
    re(n);
}