#include<iostream>
using namespace std;
int main(){
    int n = 1;
    do{
        cout << n << endl;
        n *= 2;
    }while( n <10000 );
    return 0;
}