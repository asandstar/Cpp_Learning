#include<iostream>
using namespace std;
int main(){
    int **pp;//a point that points to int*
    int *p;
    int n = 1234;
    p = &n;//come on, this is address.
    pp = &p;
    cout << *(*pp) << endl;//because *pp is p,so *(*pp) is n
    return 0;
}