#include<iostream>
using namespace std;
int main(){
    int a1 = 1, a2 = 1; int k;
    cin >> k;//（1 <= k <= 46）
    if( k == 1|| k == 2 )
        cout << 1 << endl;
    else {
        int sum;
        for(int i = 0;i < k-2; ++i){//k>2
            sum = a1+a2;
            a1 = a2;
            a2 = sum;
        }
        cout << a2 << endl;
    }
    return 0;
}