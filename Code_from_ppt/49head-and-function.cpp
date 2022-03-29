/*二维数组作为形参时，必须写明数组有多少列，不用写明有多少行
必须要写明列数，编译器才能根据下标算出元素的地址
a[i][j]的地址：
数组首地址+i×N×sizeof(a[0][0])+j×sizeof(a[0][0])
（N是数组列数）
*/
#include<iostream>
#include<cmath>//自带函数求平方根
using namespace std;
int main()
{
    double a;
    cin >> a;
    if( a < 0 ){
        cout << "Illegal input" << endl;
        return 0;
    }
    cout << sqrt(a);
    return 0;
}