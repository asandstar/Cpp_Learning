#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    FILE * fp = fopen("some.dat","wb");
    int x,y;
    scanf("%d",&x);
    fwrite(&x,sizeof(int),1,fp);
    fclose(fp);

    //在文件中写入和读取一个整数

    fp = fopen("some.dat","rb");
    fread(&y, sizeof(int), 1, fp);
    fclose(fp);
    printf("%d",y);
    return 0;
}