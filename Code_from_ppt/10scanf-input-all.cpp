#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char c;
    while(scanf("%c",&c) != EOF)
    {
        printf("%c", c);
    }
    return 0;
}
//用scanf读入所有输入的字符，包括空格，回车

//cin,cout 速度比scanf,printf慢,输入输出数据量大时用后者
//一个程序里面不要同时用cin和scanf,不要同时用cout和printf