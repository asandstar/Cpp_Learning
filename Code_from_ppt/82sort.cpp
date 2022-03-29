#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct Rule1
{
    bool operator()( const int & a1, const int & a2)const{
        return a1 > a2;
    }
};
struct Rule2
{
    bool operator()( const int & a1, const int & a2)const{
        return a1%10 < a2%10;
    }
};

void Print(int a[], int size){//size是数组长度
    for(int i = 0; i < size; ++i)
        cout << a[i] << ",";
    cout << endl;
}

int main()
{
    int a[] = { 12,45,3,98,21,7 };
    sort(a,a+sizeof(a)/sizeof(int)); //从小到大
    cout << "1)"; Print(a,sizeof(a)/sizeof(int));
    sort(a,a+sizeof(a)/sizeof(int),Rule1()); //从大到小
    cout << "2)"; Print(a,sizeof(a)/sizeof(int));
    sort(a,a+sizeof(a)/sizeof(int),Rule2());//按个位数从小到大
    cout << "3)";Print(a,sizeof(a)/sizeof(int));
    return 0;
}