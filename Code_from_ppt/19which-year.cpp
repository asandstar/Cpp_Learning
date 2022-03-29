#include<iostream>
using namespace std;
int main()
{
    int year;
    scanf("%d", & year);
    if( year <= 0)
        printf("Illegal year.\n");
    else{
        printf("Legal year.\n");
        if( year > 1949 && (year - 1949) % 10 == 0 )
            printf("Luky year.\n");
        else if ( year > 1921 && !((year - 1921) % 10))
            printf("Good year.\n");
        else if ( year % 4 == 0 && year % 100 || year % 400 == 0 )
            printf("Leap year.\n");
        else printf("Common year.\n");
    }
    return 0;
}
/*互相矛盾的多个条件，如果确实只希望执行其中
一个分支，应该用if和多个else if，而不要写
多个if*/