#include<iostream>
using namespace std;
int main(){
    int i = 5;
    for ( int i = 0; i < 26; ++i )
        cout << char ('a'+i);
    cout << endl;
    for ( int i = 0; i < 26; i += 2 ){
        cout << char ('A'+i);
    }
    cout << endl;
    cout << i;
}