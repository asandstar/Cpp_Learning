/*
题目内容：输入一个字符串，内有数字和非数字字符。
例如：a123x456 17960 302tab5876。
将其中连续的数字作为一个整数，依次存放到一维数组a中，
例如123放在a[0]，456放在a[1]……统计共有多少个整数，并输出这些数。
输入格式：输入一个字符串（允许空格）。
输出格式：第1行输出个数，第2行输出多个整数，用空格分隔。
输入样例：a123X456  7689?89njmk32lnk123
输出样例：
6
123 456 7689 89 32 123
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void count_digit(char *str)
{
    int digit[32], count = 0;
    char *ptr = str;
    int i = 0, str_len = strlen(str);
    while (i < str_len)
    {
        if (*(ptr + i) >= '0' && *(ptr + i) <= '9')
        {
            int len = 1; //用于统计连续数字的个数
            while (*(ptr + i + len) >= '0' && *(ptr + i + len) <= '9' && (i + len) < str_len)
            { //找出从当前位置连续数字的个数
                len++;
            }
            int sum = *(ptr + i + len - 1) - '0'; //先获取个位数的数据
            int unit = 1;                         //每一位的单位，从十位开始每次乘以10作为单位
            for (int j = len - 2; j >= 0; j--)
            { //从右往左逐个处理
                unit *= 10;
                sum += (*(ptr + i + j) - '0') * unit;
            }
            digit[count++] = sum;
            i += len; // i需要加上len的长度，越过这个数字，防止一个连续数字中的字符重复处理
            continue;
        }
        i++;
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {

        cout << digit[i] << ' ';
    }

    return;
}
int main()
{
    char buf[1024] = {0};
    cin.get(buf, 1024);
    count_digit(buf);
    return 0;
}
