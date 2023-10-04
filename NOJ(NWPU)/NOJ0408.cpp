/*
题目内容：设计一个函数sum求两个时间相加的结果A+B，A和B 都是由3个整数组成，
分别表示时、分、秒。比如，假设A为34 45 56，就表示A所表示的时间是34小时45分钟56秒。
输入格式：输入数据每行有6个整数AH、AM、AS、BH、BM、BS，分别表示时间A和B所对应的时分秒。
题目保证所有的数据合法。
输出格式：输出A+B，每个输出结果也是由时分秒3部分组成，同时也要满足时间的规则（即分和秒的取值范围在0~59），
每个输出占一行，并且所有的部分都可以用32位整数表示。
输入样例：1 2 3 4 5 6
输出样例：5 7 9
*/
#include <iostream>
using namespace std;
int main()
{
    int AH, AM, AS, BH, BM, BS, CH, CM, CS, add;
    cin >> AH >> AM >> AS >> BH >> BM >> BS;
    CH = AH + BH;
    CS = AS + BS;
    if (CS >= 60)
    {
        add = CS / 60;
        CM = CM + add;
        CS = CS - add * 60;
    }
    CM = AM + BM;
    if (CM >= 60)
    {
        add = CM / 60;
        CH = CH + add;
        CM = CM - add * 60 + 1;
    }
    cout << CH << ' ' << CM << ' ' << CS;
}
