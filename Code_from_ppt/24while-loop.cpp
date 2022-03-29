/*输入若干个(至少1个）不超过100的正整数，输出其
中的最大值、最小值以及所有数的和。输入的最后一个数是0
，标志着输入结束。eg:5 8 2 7 0 ↙*/
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, maxN = 0, minN = 200, n;
    cin >> n;
    while( n ){
        if( n > maxN )
        maxN = n;
        if ( n < minN )
        minN = n;
        sum += n;
        cin >> n;//继续输入：输入若干个正整数
    }
    cout << maxN << " " << minN << " " << sum;
    return 0;
}