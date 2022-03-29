#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct Rule//按个位数从小到大排
{
    bool operator()(const int & a1,const int & a2)const{
        return a1%10 < a2%10;
    }
};
void Print(int a[],int size){
    for(int i = 0; i < size; ++i)
    {
        cout << a[i] << ",";
    }
    cout << endl;
}
int main(){
    int a[] = { 12,45,3,98,21,7 };
    sort(a,a+6);
    Print(a,6);
    cout << "result:" << binary_search(a,a+6,12) << endl;
    cout << "result:" << binary_search(a,a+6,77) << endl;
    sort(a,a+6,Rule()); //按个位数从小到大排
    Print(a,6);
    cout << "result:" << binary_search(a,a+6,7) << endl;
    cout << "result:" << binary_search(a, a+6, 8, Rule()) << endl;
    return 0;
}
