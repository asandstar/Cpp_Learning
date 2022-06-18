#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m, c, e;
    cin >> m >> c >> e;
    double sum, avg;
    sum = m + c + e;
    avg = sum / 3;
    cout << fixed << setprecision(6) << sum << endl;
    cout << fixed << setprecision(6) << avg << endl;
    return 0;
}