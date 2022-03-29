//输入若干个(不知道多少个)正整数，输出其中的最大值
//输入若干个正整数后换行，再按 Ctrl+Z 键后按回车键
#include<iostream>
using namespace std;
int main(){
    int n, mx = 0;
    while( cin >> n ){
        if( n > mx )
            mx = n;
    }
    cout << mx;
    return 0;
}