/*筛法求素数：把2到n中所有的数都列出来，然后从2开始，先划掉n内所有2
的倍数，然后每次从下一个剩下的数(必然是素数)开始，划掉其n内的所有倍
数。最后剩下的数，就都是素数。*/
#include<iostream>
#include<cmath>
using namespace std;
#define MAX_NUM 10000000
bool isPrime[MAX_NUM + 10];
int main(){
    for( int i = 2;i <= MAX_NUM; ++i)
        isPrime[i] = true;
    for( int i = 2;i <= MAX_NUM; ++i){
        //每次将一个素数i的所有倍数标记为非素数
        if( isPrime[i])
            for( int j = 2 *i; j <= MAX_NUM; j += i)
                isPrime[j] = false;
    }
    for( int i = 2;i <= MAX_NUM; ++i)
        if( isPrime[i] )
            cout << i << endl;
    return 0;
}
