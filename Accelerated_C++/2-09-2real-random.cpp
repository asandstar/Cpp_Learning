// 8
#include <iostream>
using std::cout;

int main(int argc, char const *argv[])
{
    int res = 1;
    ;
    for (int i = 1; i != 10; ++i)
    {
        res *= i;
    }
    cout << res << std::endl;
    return 0;
}
