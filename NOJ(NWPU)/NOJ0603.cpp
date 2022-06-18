#include <iostream>
#include <string.h>
using namespace std;
int find_difference(char S1[], char S2[])
{
    int d;
    for (int i = 0; i < 80; i++)
    {
        if (S1[i] != S2[i])
        {
            d = int(S1[i]) - int(S2[i]);
            break;
        }
    }
    cout << d;
    return 0;
}
int stringcompare(char S1[], char S2[])
{
    if (strcmp(S1, S2) == 0)
        return 0;
    else
        find_difference(S1, S2);
    return 0;
}
int main()
{
    char s1[80], s2[80];
    cin >> s1 >> s2;
    stringcompare(s1, s2);
}