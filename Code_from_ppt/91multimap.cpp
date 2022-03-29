#include<iostream>
#include<map>//使用multimap和map需要包含此头文件
#include<cstring>
using namespace std;
struct StudentInfo{
    int id;
    char name[20];
};
struct Student{
    int score;
    StudentInfo info;
};
typedef multimap<int,StudentInfo>MAP_STD;
// 此后 MAP_STD 等价于 multimap<int,StudentInfo>
// typedef int * PINT;
// 则此后 PINT 等价于 int *。 即 PINT p; 等价于 int * p;
int main()
{
    MAP_STD mp;
    Student st;
    char cmd[20];
    while( cin >> cmd ){
        if( cmd[0] == 'A'){
            cin >> st.info.name >> st.info.id >> st.score;
            mp.insert(make_pair(st.score,st.info));
        }
        //make_pair生成一个 pair<int,StudentInfo>变量
        //其first 等于 st.score, second 等于 st.info
        else if ( cmd[0] == 'Q'){
            int score;
            cin >> score;
            MAP_STD::iterator p = mp.lower_bound (score);
            if( p!= mp.begin()){
                --p;
                score = p->first;//比要查询分数低的最高分
                MAP_STD::iterator maxp = p;
                int maxId = p->second.id;
                for(;p != mp.begin() && 
                    p->first == score; --p){
                        //遍历所有成绩和score相等的学生
                    if(p->second.id > maxId){
                        maxp = p;
                        maxId = p->second.id;
                    }
                }
                if(p->first == score){
                    if(p->second.id > maxId){
                        maxp = p;
                        maxId = p->second.id;
                    }
                }
                cout << maxp->second.name << " "
                    << maxp->second.id << " "
                    << maxp->first << endl;
            }
            else cout << "Nobody" << endl;
        }
    }
    return 0;
}