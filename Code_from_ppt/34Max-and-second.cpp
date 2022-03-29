//输入至少2个整数，求最大值和第二大值
#include<iostream>
using namespace std;
int main(){
    int n, max1, max2;
    int num = 0;
    while(cin >> n){
        ++num;
        if( num == 1 )
            max1 = n;
        else if( num == 2 ){
            if( n > max1 ){
                max2 = max1;
                max1 = n;
            }
            else
                max2 = n;
        }
        else
            if( n >= max1 ){
                max2 = max1;
                max1 = n;
            }
            else if( n > max2 )
                max2 = n;
        
    }
    cout << max1 << " " << max2 << endl;
    return 0;
}