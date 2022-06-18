#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string flag = "=";
    int pos = s.find_first_of(flag);
    for (int i = pos - 1; i >= 0; i--)
        cout << s[i];
    return 0;
}
