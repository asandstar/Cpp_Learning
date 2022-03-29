/*Write a program to count how many times each distinct word appears in its input.*/
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
    vector<string> word;
    vector<int> count;
    typedef vector<string>::size_type vec_sz;

    string s;
    while (cin >> s)
    {
        bool found = false;

        for (int i = 0; i != word.size(); ++i)
        {
            if (s == word[i])
            {
                ++count[i];
                found = true;
            }
        }

        if (found == false)
        {
            word.push_back(s);
            count.push_back(1);
        }
    }

    cout << endl;
    for (int i = 0; i != word.size(); ++i)
    {
        cout << word[i] << " appear " << count[i] << " times!" << endl;
    }

    return 0;
}
