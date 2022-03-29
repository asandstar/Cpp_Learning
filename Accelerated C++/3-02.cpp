/*
Write a program to compute and print the quartiles (that is, the quarter of the numbers with
the largest values, the next highest quarter, and so on) of a set of integers
*/
#include <algorithm>
//#include <iomanip>
//#include <ios>
#include <iostream>
//#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::vector;
int main()
{
    // ask for and read the student’s name
    cout << "Please enter a set of number: ";
    vector<double> number;
    double x;
    // invariant: number contains all the number grades read so far
    while (cin >> x)
        number.push_back(x);
    // check that the student entered some number grades
    typedef vector<double>::size_type vec_sz;
    vec_sz size = number.size();
    if (size == 0)
    {
        cout << endl
             << "You must enter your number. "
                "Please try again."
             << endl;
        return 1;
    }
    // sort the number
    sort(number.begin(), number.end());
    vec_sz quar = size / 4;
    double large, middle, small;
    large = size % 4 == 0 ? (number[3 * quar - 1] + number[3 * quar]) / 2
                          : number[3 * (size + 1) / 4];
    middle = size % 4 == 0 ? (number[2 * quar - 1] + number[2 * quar]) / 2
                           : number[2 * (size + 1) / 4];
    small = size % 4 == 0 ? (number[quar - 1] + number[quar]) / 2
                          : number[(size + 1) / 4];
    // compute and write the final grade
    cout << "Your largest values is " << large
         << endl
         << "Your next largest values is " << middle
         << endl
         << "Your smallest values is " << small
         << endl;

    return 0;
}