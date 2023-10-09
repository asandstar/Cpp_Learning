/*
题目内容：
定义下面结构表示复数：
typedef struct complex {
	double r;
	double i;
}COMPLEX;
编写四个函数分别实现复数的和、差、积、商计算，在主函数中输入数据并调用这些函数得到复数运算结果。
输入格式：第1行输入第1个复数的实部和虚部，第2行输入第2个复数的实部和虚部
输出格式：输出数据格式为%+.2lf，输出格式如下结果显示。
输入样例：
-1 5
4 3
输出样例：
(-1.00+5.00i)+(4.00+3.00i)=(3.00+8.00i)
(-1.00+5.00i)-(4.00+3.00i)=(-5.00+2.00i)
(-1.00+5.00i)*(4.00+3.00i)=(-19.00+17.00i)
(-1.00+5.00i)/(4.00+3.00i)=(0.44+0.92i)
*/
#include <iostream>
#include <iomanip>
using namespace std;
typedef struct complex
{
    double r;
    double i;
} COMPLEX;
COMPLEX add(COMPLEX c1, COMPLEX c2)
{
    COMPLEX cadd;
    cadd.r = c1.r + c2.r;
    cadd.i = c1.i + c2.i;
    return cadd;
}
COMPLEX mi(COMPLEX c1, COMPLEX c2)
{
    COMPLEX cmi;
    cmi.r = c1.r - c2.r;
    cmi.i = c1.i - c2.i;
    return cmi;
}
COMPLEX mul(COMPLEX c1, COMPLEX c2)
{
    COMPLEX cmul;
    cmul.r = c1.r * c2.r - c1.i * c2.i;
    cmul.i = c1.r * c2.i + c1.i * c2.r;
    return cmul;
}
COMPLEX div(COMPLEX c1, COMPLEX c2)
{
    COMPLEX cdiv;
    cdiv.r = (c1.r * c2.r + c1.i * c2.i) / (c2.r * c2.r + c2.i * c2.i);
    cdiv.i = (c1.i * c2.r - c1.r * c2.i) / (c2.r * c2.r + c2.i * c2.i);
    return cdiv;
}
int main()
{
    COMPLEX c1, c2;
    cin >> c1.r >> c1.i;
    cin >> c2.r >> c2.i;
    cout << fixed << setprecision(2)
         << '(' << c1.r << '+' << c1.i << "i)+"
         << '(' << c2.r << '+' << c2.i << "i)="
         << '(' << add(c1, c2).r << '+' << add(c1, c2).i << "i)" << endl;

    if (mi(c1, c2).i > 0)
    {
        cout << fixed << setprecision(2)
             << '(' << c1.r << '+' << c1.i << "i)-"
             << '(' << c2.r << '+' << c2.i << "i)="
             << '(' << mi(c1, c2).r << '+' << mi(c1, c2).i << "i)" << endl;
    }
    else
    {
        cout << fixed << setprecision(2)
             << '(' << c1.r << '+' << c1.i << "i)-"
             << '(' << c2.r << '+' << c2.i << "i)="
             << '(' << mi(c1, c2).r << mi(c1, c2).i << "i)" << endl;
    }

    cout << fixed << setprecision(2)
         << '(' << c1.r << '+' << c1.i << "i)*"
         << '(' << c2.r << '+' << c2.i << "i)="
         << '(' << mul(c1, c2).r << '+' << mul(c1, c2).i << "i)" << endl;

    if (div(c1, c2).i > 0)
    {
        cout << fixed << setprecision(2)
             << '(' << c1.r << '+' << c1.i << "i)/"
             << '(' << c2.r << '+' << c2.i << "i)="
             << '(' << div(c1, c2).r << '+' << div(c1, c2).i << "i)" << endl;
    }
    else
    {

        cout << fixed << setprecision(2)
             << '(' << c1.r << '+' << c1.i << "i)/"
             << '(' << c2.r << '+' << c2.i << "i)="
             << '(' << div(c1, c2).r << div(c1, c2).i << "i)" << endl;
    }
}
