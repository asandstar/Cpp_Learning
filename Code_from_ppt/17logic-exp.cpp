/*逻辑运算符用于表达式的逻辑操作，有 &&, || , ! 三种，
操作的结果是true或false*/
//与 &&
//exp1 && exp2 当且仅当exp1和exp2的值都为真（或非0）时，结果为true
//或 ||
//exp1 || exp2 当且仅当exp1和exp2的值都为假（或0）时，结果为false
//非 !
//! exp exp值为真(或非0),结果为false,exp值为false(0),结果为true
#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1;
    bool n = (a++) && (b++);// b++不被计算
    cout << a << "," << b << endl;
    n = a ++ && b ++ ;// a++和b++都要计算
    cout << a << "," << b << endl;
    n = a ++ || b ++ ;//b++不被计算
    cout << a << "," << b << endl;
    return 0;
}