/*
map例题：单词词频统计程序
输入大量单词，每个单词，一行，不超过20字符，没有
空格。 按出现次数从多到少输出这些单词及其出现次数
。出现次数相同的，字典序靠前的在前面
输入样例：
this
is
ok
this
plus
that
is
plus
plus
输出样例：
plus 3
is 2
this 2
ok 1
that 1
*/
#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;
struct Word{
    int times;
    string wd;
};
struct Rule{
    bool operator()( const Word & w1,const Word & w2)const{
        if( w1.times != w2.times)
            return w1.times > w2.times;
        else
            return w1.wd < w2.wd;
    }
};
int main(){
    string s;
    set<Word,Rule> st;
    map<string, int> mp;
    while( cin >> s )
        ++ mp[s];
    for( map<string,int>::iterator i = mp.begin();
        i != mp.end();++i){
            Word tmp;
            tmp.wd = i-> first;
            tmp.times = i->second;
            st.insert (tmp);
        }
        for(set<Word,Rule>::iterator i = st.begin();
        i != st.end(); ++i)
        cout << i->wd << " " << i->times << endl;
}