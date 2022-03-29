/*
头文件cstring中声明:
void * memset(void * dest,int ch,int n);
将从dest开始的n个字节，都设置成ch。返回值是dest。ch只有最低的字节起
作用。
*/
#include<iostream>
using namespace std;
#include<cstring>
int main(){

    char szName[200] = "";
    memset( szName,'a',10);
    cout << szName << endl;
    int a[100];
    memset(a,0,sizeof(a));
    cout << a << endl;
}