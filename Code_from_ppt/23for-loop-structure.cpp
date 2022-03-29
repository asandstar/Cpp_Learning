/*给定正整数n和m,在1至n这n个数中，取出两个不同的数，
使得其和是m的因子，问有多少种不同的取法。*/
//思路：穷举1-n这n个数中取两个数的所有取法，对每一种取法，判断其和是不是m的因子
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int total = 0;
    cin >> n >> m;
    for ( int i = 1; i < n; ++i ){
        for ( int j = i + 1; j <= n; ++j )
        //When i is determined, go through other num for j.
            if (m % (i + j) == 0 )
        //Judging whether the sum is a factor or not.
                ++total;
    }
    cout << total;
    return 0;
}
/*for 语句括号里面的“表达式1”，“表达式2”，“表达式3”
任何一个都可以不写，甚至可以全都不写，但是“;”必须保留。

for( ; i < 100; ++ i ) //假设i在for前已经有合理值
cout << i ;

for( ; ; ) 
cout << "hello" <<endl; //永远不停输出 hello

可以用 break 语句从 for( ; ;)死循环中跳出*/