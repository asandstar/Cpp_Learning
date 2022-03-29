#include<iostream>
#include<cstdio>
int main()
{
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);//不会跳过空格
    printf("%c%c%c", a, b, c);
    return 0;
}
/*
//单行注释用“//”
多行注释用“/**/