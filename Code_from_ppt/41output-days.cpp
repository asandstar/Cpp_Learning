/*
例题： 已知2012年1月25日是星期三，编写一个程序，
输入用“年 月 日”表示的一个2012年1月25日以后的期，
输出该日期是星期几(星期天输出0)。
Sample Input
2015 11 02
Sample Output
1
*/
//思路：2012年1月22日是星期天。
//算出给定日期是从该天起过了x天，然后输出x%7
#include<iostream>
using namespace std;
int monthDays[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int year, month, date;
    int days = 0;
    cin >> year >> month >> date;
    for (int y = 2012; y < year; ++y ){
        if( y%4 == 0 && y%100 != 0 || y%400 == 0 )
            days += 366;
        else
            days += 365;
    }
    if( year%4 == 0 && year%100 != 0 || year%400 == 0 )
        monthDays[2] = 29;
    for(int m = 1; m < month; ++m)
        days += monthDays[m];
        days += date;
        days -= 22;
        cout << days % 7 << endl;
        return 0;
}