#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string left;
    string right;
    int n = s.length();
    if (n % 2 == 0)
    {
        int half = n / 2;
        for (int i = 0; i < half; i++)
            left[i] = s[i];
        sort(left.begin(), left.begin() + half);
        for (int j = half, i = 0; j < n - 1, i < half; j++, i++)
            right[i] = s[j];
        sort(right.begin(), right.begin() + half);
        for (int i = 0; i < half; i++)
            cout << right[i];
        for (int i = half - 1; i >= 0; i--)
            cout << left[i];
    }
    else if (n % 2 != 0)
    {
        int half = (n - 1) / 2;
        // sort(s[0], s[half - 1]);
        //  sort(s[half + 1], s[n - 1], cmp);
        for (int i = 0; i < half; i++)
            left[i] = s[i];
        sort(left.begin(), left.begin() + half);
        for (int j = half + 1, i = 0; j < n - 1, i < half; j++, i++)
            right[i] = s[j];
        sort(right.begin(), right.begin() + half);
        for (int i = 0; i < half; i++)
            cout << right[i];
        cout << s[half];
        for (int i = half - 1; i >= 0; i--)
            if (left[i] != '\0')
                cout << left[i];
    }
    return 0;
}