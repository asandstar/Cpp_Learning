 //写一个程序，将文件 in.txt 里面的整数排序后，输出到out.txt
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000];
int main()
{
    FILE * fpIn = fopen("in.txt","r");
    if(fpIn == NULL)
        return 0;
    FILE * fpOut = fopen("out.txt","w");
    int n = 0;
    while( fscanf(fpIn,"%d",a+n) != EOF )
        ++n;
    fclose(fpIn);
    sort(a,a+n);
    for( int i = 0; i < n; ++i )
        fprintf(fpOut,"%d ",a[i]);
    fclose(fpOut);
    return 0;
}