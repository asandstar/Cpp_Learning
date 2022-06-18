#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi = 3.141592654;
    double r, h;
    double l, s, sq, vq, vz;
    cin >> r >> h;
    l = 2 * pi * r;
    s = pi * r * r;
    sq = 4 * pi * r * r;
    vq = (4.0 / 3) * pi * r * r * r;
    //没变成浮点数所以前面的分数失效了呜呜呜
    vz = s * h;
    cout << fixed << setprecision(2) << l << endl;
    cout << fixed << setprecision(2) << s << endl;
    cout << fixed << setprecision(2) << sq << endl;
    cout << fixed << setprecision(2) << vq << endl;
    cout << fixed << setprecision(2) << vz << endl;
    return 0;
}
