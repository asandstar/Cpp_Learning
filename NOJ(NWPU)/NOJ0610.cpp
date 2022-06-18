#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
void count(char S[][80])
{
    int countA, counta, countd, counts, counte;
    countA = counta = countd = counts = counte = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            if (S[i][j] >= 'A' && S[i][j] <= 'Z')
                countA += 1;
            else if (S[i][j] >= 'a' && S[i][j] <= 'z')
                counta += 1;
            else if (S[i][j] >= '0' && S[i][j] <= '9')
                countd += 1;
            else if (S[i][j] == ' ')
                counts += 1;
            else if (S[i][j] > '\0')
                counte += 1;
        }
    }
    cout << countA << ' ' << counta << ' ' << countd << ' ' << counts << ' ' << counte;
    return;
}
int main()
{
    char buf[3][80] = {0};

    for (int i = 0; i < 3; i++)
        cin.getline(buf[i], 80);
    /*for (int i = 0; i < 3; i++)
        for (int j = 0; j < 80; j++)
            cout << buf[i][j] << endl;*/
    count(buf);
    return 0;
}