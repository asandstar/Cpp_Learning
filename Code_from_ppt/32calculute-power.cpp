//给出一个整数a和一个正整数n，求乘方a^n。
#include<iostream>
using namespace std;
int main(){
    int a, n;
    cin >> a >> n;
    int result = a;
    for ( int i = 0; i < n - 1; i ++ )
        result *= a;
    cout << result;
}