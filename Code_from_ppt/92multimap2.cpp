#include<iostream>
#include<map>
#include<string>
using namespace std;
struct Student{
    string name;
    int score;
};
Student students[5] = {
    {"Jack",89},{"Tom",74},{"Cindy",87},{"Alysa",87},{"Micheal",98}
};
typedef map<string, int>MP;
int main()
{
    MP mp;
    for(int i = 0;i < 5; ++i)
        mp.insert(make_pair(students[i].name,students[i].score));
    cout << mp["Jack"] << endl;
    mp["Jack"] = 60;
    for(MP::iterator i = mp.begin();i != mp.end(); ++i)
        cout << "(" << i->first << "," << i->second << ")";
    cout << endl;
    Student st;
    st.name = "Jack";
    st.score = 99;
    pair<MP::iterator, bool> p =
        mp.insert(make_pair(st.name,st.score));
    if(p.second)
        cout << "(" << p.first->first << ","
        << p.first->second<<") inserted" << endl;
    else
        cout << "insertion failed" <<endl;
    mp["Harry"] = 78;
    MP::iterator q = mp.find("Harry");
    cout << "(" << q->first << "," <<q->second << ")" << endl;
    return 0;
}