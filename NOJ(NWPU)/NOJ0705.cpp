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