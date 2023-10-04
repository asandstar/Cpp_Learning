/*
题目内容：输入圆半径r和圆柱高h，计算圆周长l、圆面积s、圆球表面积sq、圆球体积vq和圆柱体积vz。
输入格式：输入double型数据，用空格分隔
输出格式：按顺序输出圆周长、圆面积、圆球表面积、圆球体积、圆柱体积，保留2位小数，结果每行输出一个
输入样例：1.5 3
输出样例：
9.42
7.07
28.27
14.14
21.21
*/
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
