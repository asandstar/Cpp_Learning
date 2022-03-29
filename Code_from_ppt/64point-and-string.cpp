/*
字符串常量的类型就是 char *
字符数组名的类型也是 char *
*/
#include<iostream>
using namespace std;
int main(){
    char *p = "Please input your name:\n";
    cout << p ;
    char name[20];
    char *pName = name;
    cin >> pName;
    cout << "Your name is " << pName;
    return 0;
}