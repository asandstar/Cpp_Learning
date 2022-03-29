#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    double f;
    char c;
    cin >> n1 >> n2 >> c >>f;
    cout << n1 << "," << n2 << "," << c << "," << f;
    //input "5 10k 1.23"回车

    //用cin读入所有输入的字符，包括空格，回车
    int c;
    while((c = cin.get()) != EOF)
    {
        cout << (char)c;
    }
    return 0;
}

