/*例题: 写一个判断整数奇偶性的程序，要求输入一个整数，如果是奇数，就输出“It's 
odd.”，如果是偶数，就输出“It's even.”。*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    if( n % 2 )
    //if( n % 2 == 1)
        printf("It's odd.\n");
    else
        printf("It's even.\n");

    
    int a;
    scanf("%d", &a);
    if( a > 0 ){
        if ( a % 2 )
            cout << "good";
        else
            cout << "bad";
    }

    return 0;
}