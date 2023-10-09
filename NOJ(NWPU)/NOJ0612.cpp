/*
题目内容：
编写程序对字符串按下面给定的条件进行排序，
排序后的结果仍按行重新存入字符串中并打印出来。
条件：从字符串中间一分为二，左边部分按字符的ASCII值降序排序，
右边部分按字符的ASCII值升序排序；排序后，左边部分与右边部分进行交换。
如果原字符串长度为奇数，则最中间的字符不参加排序，字符仍放在原位置上。
输入格式：输入一行字符串。
输出格式：输出结果字符串。
输入样例：abcd9876
输出样例：6789dcba
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string left;
    string right;
    int n = s.length();
    if (n % 2 == 0)
    {
        int half = n / 2;
        for (int i = 0; i < half; i++)
            left[i] = s[i];
        sort(left.begin(), left.begin() + half);
        for (int j = half, i = 0; j < n - 1, i < half; j++, i++)
            right[i] = s[j];
        sort(right.begin(), right.begin() + half);
        for (int i = 0; i < half; i++)
            cout << right[i];
        for (int i = half - 1; i >= 0; i--)
            cout << left[i];
    }
    else if (n % 2 != 0)
    {
        int half = (n - 1) / 2;
        // sort(s[0], s[half - 1]);
        //  sort(s[half + 1], s[n - 1], cmp);
        for (int i = 0; i < half; i++)
            left[i] = s[i];
        sort(left.begin(), left.begin() + half);
        for (int j = half + 1, i = 0; j < n - 1, i < half; j++, i++)
            right[i] = s[j];
        sort(right.begin(), right.begin() + half);
        for (int i = 0; i < half; i++)
            cout << right[i];
        cout << s[half];
        for (int i = half - 1; i >= 0; i--)
            if (left[i] != '\0')
                cout << left[i];
    }
    return 0;
}
