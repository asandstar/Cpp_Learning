/*中“元素个数”必须是常量或常量表达式，
不能是变量，而且其值必须是正整数。
元素个数也称作“数组的长度”。*/
#include<iostream>
using namespace std;
#define NUM 5//定义符号常量
int a[NUM];
int main(){
    for(int i = 0; i < NUM; ++i)
        cin >> a[i];
    for(int i = NUM-1; i >= 0; --i)
        cout << a[i] << " ";
    return 0;
}