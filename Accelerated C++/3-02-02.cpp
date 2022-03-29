#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char const *argv[])
{
    cout << "Please enter number:";
    int x;
    vector<int> num;
    while (cin >> x)
    {
        num.push_back(x);
    }
    cout << endl;

    typedef vector<int>::size_type vec_sz;
    vec_sz size = num.size();
    if (size == 0)
    {
        cout << endl
             << "You must enter number"
                "Please try again"
             << endl;
        return 1;
    }

    sort(num.begin(), num.end());

    int count = size / 4;

    for (int i = 0; i != size; ++i)
    {
        for (int j = 0; j != count; ++j)
        {
            cout << num[size - 1 - i] << " ";
        }
        cout << endl;
    }

    return 0;
}
