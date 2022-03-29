#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    /*int n; char c; float m;
    scanf("%d%c%f", &n, &c, &m);
    printf("%d %c %f", n, c, m);//%f保留小数点后六位*/

    int p = 123;//控制printf 输出整数的宽度
    printf("\n%05d,%5d,%5d,%05d", p, p, 123456, 123456);


    int q = 123.45;//控制printf 输出浮点数的精度
    double b = 22.37362723;
    //double 精度高于float，所以一般尽量使用double！
    printf("\n%.5f %.2f %.12f", 12.3, q, b);

    /*格式控制符%x和%u
    %x: 以十六进制形式读入或输出整数
    %u: 以无符号整数形式输出整数*/
    printf("\n%x, %d, %u",0xffffffff, 0xffffffff, 0xffffffff);

    return 0;
}