#include<iostream>
using namespace std;
void Reverse(int *p,int size){//颠倒函数
    for(int i = 0; i < size/2; ++i){
        int tmp = p[i];
        p[i] = p[size-1-i];//与关于中心对称的相应元素进行互换
        p[size-1-i] = tmp;
    }
}
int main()
{
    int a[5] = {1,2,3,4,5};
    Reverse(a,sizeof(a)/sizeof(int));
    for(int i = 0; i < 5; ++i){
        cout << *(a+i) << " ";
    }
    return 0;
}
