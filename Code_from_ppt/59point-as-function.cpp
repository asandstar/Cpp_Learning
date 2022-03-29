#include<iostream>
using namespace std;
void Swap( int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
int main ()
{
    int m = 3,n = 4;
    Swap( &m, &n);//指针互换指向
    cout << m << " " << n << endl;
    return 0;
}