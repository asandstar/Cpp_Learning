#include<iostream>
#include<cstring>
using namespace std;
//不要每次循环都调用strlen
/*
char s[100]="test";
for( int i = 0; i < strlen(s); ++ i ) {
s[i] = s[i]+1; 
}
strlen函数的执行是需要时间的，且时间和字符串的长度成正比
每次循环，都调用strlen函数，这是效率上的很大浪费
*/
//应取出s的长度存放在一个变量里面，然后在循环的时候使用该变量
int main(){
    char s[100] = "test";
    int len = strlen(s);
    for (int i = 0; i < len/*s[i]*/; ++i)
    {
        s[i] = s[i]+1;
    }

}