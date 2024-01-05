// 4
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    cout << "Please enter word:";

    typedef vector<string>::size_type vec_sz;
    vector<string> word;
    vector<vec_sz> length;
    string s;

    while (cin >> s)
    {
        cin >> s;
        bool found = false;
        for (vec_sz i = 0; i != word.size(); ++i)
        {
            if (s == word[i])
            {
                found = true;
            }
        }

        if (found == false)
        {
            word.push_back(s);
            length.push_back(s.size());
        }
    }

    int max = 0, min = INT_MAX;
    int maxNum = -1, minNum = -1;
    for (vec_sz i = 0; i != word[i].size(); ++i)
    {
        if (max <= length[i])
        {
            max = length[i];
            maxNum = i;
        }
        if (min >= length[i])
        {
            min = length[i];
            minNum = i;
        }
    }

    cout << "Longest string: " << word[maxNum] << "; length is " << max << endl;
    cout << "Shorst string: " << word[minNum] << "; length is " << min << endl;

    return 0;
}
