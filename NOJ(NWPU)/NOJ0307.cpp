#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum, flag;
    flag = 0;
    cin >> a >> b >> c;
    for (sum = 10; sum <= 100; sum++)
    {
        if (sum % 3 == a && sum % 5 == b && sum % 7 == c)
        {
            cout << sum;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << -1;
}