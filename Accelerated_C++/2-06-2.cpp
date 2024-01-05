#include <iostream>
#include <string>
// say what standard-library names we use
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    int n, i, j;
    cout << "input a number:";
    cin >> n;

    // a square
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
            cout << " *";
        cout << endl;
    }
    cout << endl;
    // a rectangle
    for (i = 0; i <= n / 2; i++)
    {
        for (j = 0; j <= n; j++)
            cout << " *";
        cout << endl;
    }
    cout << endl;
    // a triangle
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
            cout << " *";
        cout << endl;
    }
}
//哦我的天原来它说三角形要是空的