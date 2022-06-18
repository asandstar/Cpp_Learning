#include <iostream>
using namespace std;
double fceil(double x)
{
    if (x <= 0)
    {
        x = (int)x;
        cout << x;
    }
    else
    {
        x = (int)x;
        cout << x + 1;
    }
    return 0;
}

int main()
{
    double n;
    cin >> n;
    fceil(n);
    return 0;
}