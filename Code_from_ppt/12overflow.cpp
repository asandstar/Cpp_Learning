//溢出:两个整数类型进行加、减、乘都可能导致
//计算结果超出了结果类型所能表示的范围
//溢出部分直接被丢弃
#include<iostream>
using namespace std;
int main()
{
    unsigned int n1 = 0xffffffff;
    cout << n1 << endl;
    unsigned int n2 = n1 + 3;//罪魁祸首
    cout << n2 <<endl;//本来应该是0x100000002,结果输出是2

    //中间结果溢出
    printf("%d",(2147483646 + 6)/2);
    printf("\n%d",2147483646/2 + 6/2);
    //解决溢出的办法是尽量使用更高精度的数据类型
//（两个int进行运算会溢出，用两个 long long 进行运算可能就不会溢出）
    return 0;
}