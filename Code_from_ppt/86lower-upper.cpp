#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct Rule
{
    bool operator()( const int & a1,const int & a2)const{
        return a1%10 < a2%10;
    }
};
void Print(int a[],int size){
    for(int i = 0; i < size; ++i){
        cout << a[i] << ",";
    }
    cout << endl;
}
#define NUM 7
int main()
{
    int a[NUM] = { 12,5,3,5,98,21,7 };
    sort(a,a+NUM);
    Print(a,NUM);
    int * p = lower_bound(a, a+NUM ,5);
    cout << *p << "," << p-a << endl;
    p = upper_bound(a, a+NUM, 5);
    cout << *p << endl;
    cout << * upper_bound(a,a+NUM,13) << endl;
    sort(a,a+NUM,Rule());
    Print(a,NUM);
    cout << * lower_bound(a,a+NUM,16,Rule()) << endl;
    cout << lower_bound(a,a+NUM,25,Rule())-a << endl;
    cout << upper_bound(a,a+NUM,18,Rule())-a << endl;
    if( upper_bound(a,a+NUM,18,Rule()) == a+NUM)
        cout << "not found" << endl;
    cout << * upper_bound(a,a+NUM,5,Rule()) << endl;
    cout << * upper_bound(a,a+NUM,4,Rule()) << endl;
    return 0;
}