#include<iostream>
using namespace std;
int main(){
    int n,m;
    printf("成功读入的变量个数:%d", scanf("%d%d", &n, &m));
    //值为int，表示成功读入的变量个数
    /*12 56↙
        2*/
    while(scanf("%d%d", &n, &m) != EOF
    /*或scanf("%d%d",&n,&m) == 2*/){
        printf("和：%d", n+m);
        //值为EOF(即-1)则说明输入数据已经结束
        //Windows系统下,不停输入两个整数再敲回车，
//则不停输出它们的和，直到输入 Ctrl+Z 然后 回车,程序结束
    }

}