#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string ten[10];
    for (int i = 0; i < 10; i++)
        cin >> ten[i];
    sort(ten, ten + 10);
    for (int j = 0; j < 10; j++)
        cout << ten[j] << ' ';
}