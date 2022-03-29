//用牛顿迭代法求输入的数的平方根。
//迭代公式： xn+1 = (xn + a / xn) / 2
#include<iostream>
using namespace std;
double EPS = 0.001;
int main()
{
    double a;
    cin >> a;
    if( a >= 0 ){
        double x = a/2, lastX = x + 1 + EPS;
        while( x - lastX > EPS || lastX - x > EPS ){
            lastX = x;
            x = (x + a/x)/2;//精度未达要求，继续迭代
        }
        cout << x;
    }
    else
        cout << "It can't be nagitive.";
    return 0;
}
/*输出示例
输入 2时，
EPS取值 输出结果
1 1.5
0.1 1.41667
0.01 1.41422
0.001 1.41421
0.0001 1.41421
*/
