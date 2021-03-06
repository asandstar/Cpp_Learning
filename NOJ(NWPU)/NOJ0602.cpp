#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string &replace_all_distinct(string &str, const string &old_value, const string &new_value)
{
    for (string::size_type pos(0); pos != string::npos; pos += new_value.length())
    {
        if ((pos = str.find(old_value, pos)) != string::npos)
            str.replace(pos, old_value.length(), new_value);
        else
            break;
    }
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    replace_all_distinct(str, "you", "we");
    cout << str;
    return 0;
}
