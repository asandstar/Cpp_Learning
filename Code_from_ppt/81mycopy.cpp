/*用法示例：
mycopy src.dat dest.dat 即  将 src.dat 拷贝到 dest.dat 
如果 dest.dat 原来就有，则原来的文件会被覆盖 */
#include<iostream>
#include<cstdio>
using namespace std;
int main(int argc, char * argv[])
{
    if( argc != 3){
        printf("File name missing!\n");
        return 0;
    }
    FILE * fpIn = fopen(argv[1],"rb");//打开文件用于读
    if( !fpIn ){
        printf("Source file open error.\n");
        return 0;
    }
    FILE * fpOut = fopen(argv[2], "wb");//打开文件用于写
    if( !fpOut){
        printf("New file open error.\n");
        fclose(fpIn);//打开的文件一定要关闭
        return 0;
    }
    char buf[4096];
    int n;
    while( n = fread(buf,1,4096,fpIn))
        fwrite(buf,1,n,fpOut);
/*
上面三行可以换成
int c; //必须是int
while( (c = fgetc(fpIn)) != EOF) //每次读取一个字节
fputc(c,fpOut); //每次写入一个字节
*/
    fclose(fpIn);
    fclose(fpOut);
    return 0;
}