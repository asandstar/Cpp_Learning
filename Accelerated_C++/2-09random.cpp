#include <iostream>
#include <iomanip> //包含setw()函数
#include <ctime>
#include <cstdlib> //包含srand()函数和rand()函数
using namespace std;

int main()
{
    srand((unsigned)time(NULL)); //用系统时间产生随机数种子
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            //利用不同的随机数种子产生不同的随机数序列
            // rand()%x  表示输出的随机数在[0,x)之间
            // setw(2)表示输出内容占2个空格
            cout << setw(2) << rand() % 10;
        }
        cout << endl;
    }
    return 0;
}
