#include<iostream>
#include<cstring>
#include<set>
using namespace std;
struct Rule1{
    bool operator()(const int & a,const int & b)const{
        return (a%10) < (b%10);
    }//返回值为true则说明a必须排在b前面
};
int main(){
    multiset<int, greater<int>>st; //排序规则为从大到小
    int a[10] = {1,14,12,13,7,13,21,19,8,8};
    for(int i = 0;i < 10; ++i)
        st.insert(a[i]);
    multiset<int,greater<int>>::iterator i;
    for(i = st.begin(); i != st.end(); ++i)
    cout << *i << ",";
    cout << endl;
    multiset<int, Rule1> st2;
    //st2的元素排序规则为：个位数小的排前面
    for(int i = 0; i < 10; ++i)
        st2.insert(a[i]);
    multiset<int,Rule1>::iterator p;
    for(p = st2.begin();p != st2.end(); ++p)
        cout << *p << ",";
    cout << endl;
    p = st2.find(133);
    cout << *p <<endl;
    return 0;
}