// 5
#include <iostream>
#include <vector>
#include <string>
#include <ios>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;
using std::vector;

#define HomewordKNum 3 //作业个数

int main(int argc, char const *argv[])
{
    string s;
    double examMId = 0, examFinal = 0, homewordGrade = 0;
    vector<string> name;
    vector<double> gradeFinal;

    bool done = true; //判断是否还需要输入学生的信息
    while (done)
    {
        done = false;
        cout << "Please enter your name:";
        cin >> s;
        name.push_back(s);
        cout << "Please enetr your midexam and finalexam grade:";
        cin >> examMId >> examFinal;
        cout << "Please enter your homeword garde:";
        for (int i = 0; i != HomewordKNum; ++i)
        {
            double temp;
            cin >> temp;
            homewordGrade += temp;
        }

        // cout << "test" << homewordGrade << endl;
        gradeFinal.push_back(examMId * 0.2 + examFinal * 0.4 + (homewordGrade / HomewordKNum) * 0.4);

        cout << "More(Y/N)?";
        string Judge;
        cin >> Judge;
        if (Judge == "Y")
            done = true;
    }

    for (int i = 0; i != name.size(); ++i)
    {
        streamsize prec = cout.precision();
        cout << name[i] << " garde is " << setprecision(3)
             << gradeFinal[i] << " !"
             << setprecision(prec) << endl;
    }
    return 0;
}
