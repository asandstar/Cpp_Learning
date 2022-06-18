#include <iostream>
using namespace std;
int main()
{
    int AH, AM, AS, BH, BM, BS, CH, CM, CS, add;
    cin >> AH >> AM >> AS >> BH >> BM >> BS;
    CH = AH + BH;
    CS = AS + BS;
    if (CS >= 60)
    {
        add = CS / 60;
        CM = CM + add;
        CS = CS - add * 60;
    }
    CM = AM + BM;
    if (CM >= 60)
    {
        add = CM / 60;
        CH = CH + add;
        CM = CM - add * 60 + 1;
    }
    cout << CH << ' ' << CM << ' ' << CS;
}