#include<iostream>
using namespace std;
int main(){
struct Date {
        int year;
        int month;
        int day;
};
struct StudentEx{
        unsigned ID;
        char szName[20];
        float fGPA;
        Date birthday;
};
    StudentEx MyClass [50];
    StudentEx MyClass [50] = {
        { 1234,"Tom",3.78,{ 1984,12,28 }},
        { 1235,"Jack",3.25,{ 1985,12,23 }},
        { 1236,"Mary",4.00,{ 1984,12,21 }},
        { 1237,"Jone",2.78,{ 1985,2,28 }}
    };

    MyClass[1].ID = 1267;
    MyClass[2].birthday.year = 1986;
    int n = MyClass[2].birthday.month;
    cin >> MyClass[0].szName;
}//我不懂，反正就是运行不了的这个代码
