#include<iostream>
#include<cstring>
using namespace std;
void PrintSmall( char s1[], char s2[])
//输出词典序小的字符串
{
    if( strcmp( s1,s2) <= 0)//如果s1小于等于s2
        cout << s1;
    else
        cout << s2;
}
int main()
{
    char s1[30];
    char s2[40];
    char s3[100];
    strcpy( s1,"Hello"); // 拷贝 "Hello" 到s1 ， s1 = "Hello"
    strcpy( s2,s1);// 拷贝s1到s2, s2 = "Hello"
    cout << "1)" << s2 << endl;
    strcat(s1,",world"); // 连接 ",world"到s1尾部。s1 = "Hello,world"
    cout << "2)" << s1 << endl;
    cout << "3)";
    PrintSmall("abc", s2);
    cout << endl;
    cout << "4)";
    PrintSmall("abc","aaa");
    cout << endl;
    int n = strlen( s2 );//求s2长度
    cout << "5)" << n << "," << strlen("abc") << endl;
    strupr(s1);// 把s1变成大写，s1 = "HELLO,WORLD"
    cout << "6)" << s1 << endl;
    return 0;
}