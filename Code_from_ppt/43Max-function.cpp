#include<iostream>
using namespace std;
int Max(int x, int y)
{
    if( x > y )
        return x;
    return y;
}
/*return 语句作为函数的出口，可以在函数中多次出现。
多个return语句的“返回值”可以不同。
在哪个return语句结束函数的执行，
函数的返回值就和哪个return语句里面的“返回值”相等*/
int main()
{
    int n = Max(4,6);
    cout << n << "," << Max(20, n) << endl;
    return 0;
}