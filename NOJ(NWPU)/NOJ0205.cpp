/*
题目内容：出租车的收费标准：起步价（2公里以内，含2公里）为7元钱，超过2公里且在15公里以内（含15公里）时每公里收费1.5元，超过15公里时每公里收费2.1元，不足1公里按照1公里收费。
输入格式：输入为实型(单位为公里)
输出格式：输出为实型，保留六位小数(单位为元)
输入样例：9.2
输出样例：19.000000
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double fee(double m = 0)
{
    double bonus, n, p;
    //起步价（2公里以内，含2公里）为7元钱
    if (m <= 2)
    {
        bonus = 7;
    }
    //超过2公里且在15公里以内（含15公里）时每公里收费1.5元
    else if (m <= 15)
    {
        bonus = 7 + ceil(m - 2) * 1.5;
    }
    // 超过15公里时每公里收费2.1元,不足1公里按照1公里收费
    else
    {
        bonus = 7 + 13 * 1.5 + ceil(m - 15) * 2.1;
    }
    return bonus;
}

int main()
{
    double I;
    cin >> I;
    cout << fixed << setprecision(6) << fee(I);
    return 0;
}
