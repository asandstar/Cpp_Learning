#include<iostream>
using namespace std;
void Reverse(int *p, int size){
    for(int i = 0; i < size/2; ++i ){
        int tmp = p[i];
        p[i] = p[size-1-i];
        p[size-1-i] = tmp;
    }
}
/*
int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
Reverse(a[1],4);*/
//哎，我不懂怎么输出这个结果orz
