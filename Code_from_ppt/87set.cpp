#include<iostream>
#include<cstring>
#include<set> //使用multiset和set需要此头文
using namespace std;
int main(){
    multiset<int> st;
    //排序
    int a[10] = {1,14,12,13,7,13,21,19,8,8};
    for(int i = 0; i < 10; ++i)
        st.insert(a[i]);//插入的是a [i]的复制品
    multiset<int>::iterator i; //迭代器，近似于指针
    for(i = st.begin();i != st.end(); ++i)
        cout << *i << ",";
    cout << endl;

    i = st.find(22);//查找22，返回值是迭代器
    if( i == st.end())//找不到则返回值为 end()
        cout << "not found" << endl;
    st.insert(22);//插入 22
    i = st.find(22);
    if( i == st.end())
        cout << "not found" << endl;
    else
        cout << "found:" << *i << endl;
//找到则返回指向找到的元素的迭代器
    i = st.lower_bound(13);
    //返回最靠后的迭代器 it，使得[begin(),it)中的元素
    //都在 13 前面 ，复杂度 log(n)
    cout << *i << endl;
    i = st.upper_bound(8);
    //返回最靠前的迭代器 it，使得[it,end())中的元素
    //都在 8 后面，复杂度 log(n)
    cout << *i << endl;
    st.erase(i);
     //删除迭代器 i 指向的元素，即12
    for(i = st.begin(); i != st.end(); ++i)
        cout << *i << ",";
        return 0;
}
