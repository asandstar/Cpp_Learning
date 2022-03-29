#include<iostream>
using namespace std;
int main ()
{
    for( int i = 1; i <= 10 ;++i){
        if(i % 2)
            continue;
            //为真跳出这两行的循环输出偶数和逗号
            //为假则完全停止运行
        cout << i << ",";
    }
}