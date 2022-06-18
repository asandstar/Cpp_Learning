#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, t;
    int *num = new int[n];
    int count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                t = num[j], num[j] = num[j + 1], num[j + 1] = t;
                count += 1;
            }
        }
    }
    cout << count;
    return 0;
}