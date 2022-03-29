#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    /*例题: 写一个程序，输入一个正整数n输出它的所有因子*/
    cout <<"Count from large to small:"<< endl;
    for ( int i = n; i >= 1; --i )
        if( n % i == 0 )
            cout << i << endl;
    cout <<"Count from small to large:"<< endl;
    for ( int i = 1; i <= n; ++i )
        if( n % i == 0 )
            cout << i << endl;
    return 0;
}