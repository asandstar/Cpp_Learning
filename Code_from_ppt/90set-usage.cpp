#include<iostream>
#include<cstring>
#include<set>
using namespace std;
int main(){
    set<int> st;
    int a[10] = {1,2,3,8,7,7,5,6,8,12};
    for(int i = 0; i < 10 ;++i)
        st.insert(a[i]);
    cout << st.size() << endl;
    set<int>::iterator i;
    for(i = st.begin(); i != st.end(); ++i)
        cout << *i << ",";
    cout << endl;
    pair<set<int>::iterator,bool>result = st.insert(2);
    if( !result.second )
        cout << * result.first << "already exists."
            <<endl;
    else
        cout << * result.first << " inserted." <<endl;
    return 0;
}

/*
pair<set<int>::iterator, bool> 
等价于
struct {
set<int>::iterator first;
bool second;
};

pair模板的用法
pair<T1,T2>类型等价于：
struct {
T1 first;
T2 second;
};
例如：pair<int, double> a; 
等价于：
struct {
int first;
double second;
} a;
a.first = 1;
a.second = 93.93;
*/