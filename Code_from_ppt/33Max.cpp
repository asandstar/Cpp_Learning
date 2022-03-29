//别忘了若干的输出方法
#include<iostream>
using namespace std;
int main(){
    int n, mx;
    bool first = true; //输入的是否是第一个数
    while (cin >> n){
        if( first ){
            mx = n;
            first = false;
        }
        else{
                if( n > mx )
                    mx = n;
        }
    }
    cout << mx << endl;
    return 0;
}