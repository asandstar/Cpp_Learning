#include<iostream>
using namespace std;
int main()
{
    int n1, n2 = 5;
    n2 ++;
    cout << n2 << endl;
    ++ n2;
    cout << n2 << endl;
    n1 = n2 ++;//n2先赋值到n1 再加1
    cout << n1 << "," << n2 << endl;
    n1 = ++ n2;//n2先加1 再赋值到n1
    cout << n1 << "," << n1 <<endl;
    return 0;
}