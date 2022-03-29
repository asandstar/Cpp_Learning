#include<stdio.h>
int main()
{
    int n1 = 15;
    short n2 = -15;
    unsigned short n3 = 0xffe0;
    char c = 15;
    n1 = n1 >> 2;
    n2 >>= 3;//// n2被自动转换成int输出 
    n3 >>= 4;
    c >>= 3;
    printf("n1=%d, n2=%x, n3=%x, c=%x",n1,n2,n3,c);
}
/*
n1: 0000 0000 0000 0000 0000 0000 0000 1111 
n1 >>= 2: 变成3
0000 0000 0000 0000 0000 0000 0000 0011
n2: 1111 1111 1111 0001
n2 >>= 3: 变成 fffe, 即-2
1111 1111 1111 1110
n3: 1111 1111 1110 0000
n3 >>= 4: 变成 ffe
0000 1111 1111 1110
c: 0000 1111
c >>= 3; 变成1
0000 0001
*/