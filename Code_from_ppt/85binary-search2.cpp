#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct Student{
    char name[20];
    int id;
    double gpa;
};
Student students [] = {
    {"Jack",112,3.4},{"Mary",102,3.8},{"Mary",117,3.9},
    {"Ala",333,3.5},{"Zero",101,4.0}
};
struct StudentRule1{ //按姓名从小到大排
    bool operator()(const Student & s1,const Student & s2)const{
        if( stricmp(s1.name,s2.name) < 0)
            return true;
        return false;
    }

};
struct StudentRule2{//按id从小到大排
    bool operator()(const Student & s1,const Student & s2)const{
        return s1.id < s2.id;
    }
};
struct StudentRule3{//按gpa从高到低排
    bool operator()(const Student & s1,const Student & s2)const{
        return s1.gpa>s2.gpa;
    }
};
int main(){
    Student s;
    strcpy(s.name,"Mary");
    s.id = 117;
    s.gpa = 0;
    int n = sizeof(students)/sizeof(Student);
    sort(students,students+n,StudentRule1());
    cout << binary_search( students, students+n, s, StudentRule1()) << endl;
    strcpy(s.name,"Bob");
    cout << binary_search( students, students+n, s, StudentRule1()) << endl;
    sort(students, students+n, StudentRule2());
    cout << binary_search( students, students+n, s, StudentRule2()) << endl;
    return 0;
}