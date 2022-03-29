#include<iostream>
using namespace std;
/*如果两个不同的正整数，他们的和是他们的积的因子，就称这两个数
为兄弟数，小的称为弟数，大的称为兄数。先后输入正整数n和m(n < m) , 请
在n至m这m-n+1个数中，找出一对兄弟数。如果找不到，就输出“No 
Solution.”。如果能找到，就找出和最小的那一对；如果有多对兄弟数和相
同且都是最小，就找出弟数最小的那一对。*/

//思路：枚举每一对不同的数，看看是不是兄弟数。
//用两个变量记录当前已经找到的最佳兄弟数，
//如果发现更佳的，就重新记录。
int main()
{
    int n,m;
    cin >> n >> m;
    int a = m + 1, b = m + 1;
    for( int i = n; i < m; ++i ){
        if( i > (a + b)/2 + 1)
        //先保证n<m,i=n+1后变i-1=n>(a+b)/2
            break;//跳大循环
        for( int j = i + 1; j <= m; ++j ){
            if( i + j > a + b )
                break;//跳小循环
            if( i * j % (i + j) == 0 ){
                if( i + j < a + b ){
                    a = i; b = j;
//如果能找到，就找出和最小的那一对
                }
                else if( i + j == a + b && i < a )
                    a = i; b = j;
//如果有多对兄弟数和相同且都是最小，就找出弟数最小的那一对。
            }
        }
    }
    if ( a == m + 1)//没找到，很遗憾
        cout << "No solution.";
    else
        cout << a << "," << b;
    return 0;
}