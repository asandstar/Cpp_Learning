/*
题目内容：在主函数中输入10个等长的字符串（每个字符串最多10个字符），用另一个函数对它们进行由小到大排序，然后在主函数中输出这10个已排好序的字符串。
输入格式：输入10个等长的字符串，用空格分隔。
输出格式：输出排序后的10个字符串，用空格分隔。
输入样例：she its can ibm bbc NBA nhk BOY jxf eat
输出样例：BOY NBA bbc can eat ibm its jxf nhk she
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string ten[10];
    for (int i = 0; i < 10; i++)
        cin >> ten[i];
    sort(ten, ten + 10);
    for (int j = 0; j < 10; j++)
        cout << ten[j] << ' ';
}
