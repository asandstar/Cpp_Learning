#include <iostream>
using namespace std;
int main()
{
    int i, x, a, num = 1;

    cin >> x >> a;
    for (i = 1; i <= a; i++)
    {
        num = num * x % 1000;
    }
    cout << num;
    return 0;
}
/*编写程序求一个整数x的a次方的最后三位数。
输入格式：输入均为整型，首先为x，其后为次方a，用空格隔开。
输出格式：输出为整型
输入样例：13 13
输出样例：253*/
/*如果给的数比较小，还需要考虑
if (z > 100)
    {
        printf("最后三位数为：%d\n",z);
    }
    else if(z < 10)
    {
        printf("最后三位数为：00%d\n",z);
    }
    else
    {
        printf("最后三位数为：0%d\n",z);
    }
    是的，是我搜了资料555
*/