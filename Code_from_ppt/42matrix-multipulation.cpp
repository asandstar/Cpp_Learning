/*a[0][0]是数组中地址最小的元素。
如果a[0][0]存放在地址n，
则a[i][j]存放的地址就是
n + i × M× sizeof(T) + j × sizeof(T)
二维数组的每一行，实际上都是一个一维数组。
a[0]，a[1]都可以看作是一个一维数组的名字，
可以直接当一维数组使用。
*/
#include<iostream>
using namespace std;
#define ROWS 8
#define COLS 8
int a[ROWS][COLS];
int b[ROWS][COLS];
int c[ROWS][COLS];
int main()
{
    //输入两个矩阵，记得加空格
    int m,n,p,q;
    cin >> m >> n;
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];
    cin >> p >> q;
    for(int i = 0; i < p; ++i)
        for(int j = 0; j <q; ++j)
            cin >> b[i][j];
    //两个矩阵相乘
    for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                c[i][j] = 0;
                for(int k = 0; k < n; ++k)
                    c[i][j]  += a[i][k] * b[k][j];
            }
    }
    //输出矩阵结果
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < q; ++j){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}