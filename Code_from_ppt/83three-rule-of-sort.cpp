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
struct StudentRule1{
    bool operator()(const Student & s1,const Student & s2)const{
        if( stricmp(s1.name,s2.name) < 0)
            return true;
        return false;
    }

};
struct StudentRule2{
    bool operator()(const Student & s1,const Student & s2)const{
        return s1.id < s2.id;
    }
};
struct StudentRule3{
    bool operator()(const Student & s1,const Student & s2)const{
        return s1.gpa>s2.gpa;
    }
};
void PrintStudents(Student s[],int size){
    for(int i = 0; i < size; ++i)
        cout << "(" << s[i].name << ","
                << s[i].id << "," << s[i].gpa << ")";
    cout << endl;
}
int main(){
    int n = sizeof(students)/sizeof(Student);
    sort(students,students+n,StudentRule1());
    PrintStudents(students,n);
    sort(students,students+n,StudentRule2());
    PrintStudents(students,n);
    sort(students,students+n,StudentRule3());
    PrintStudents(students,n);
    return 0;
}