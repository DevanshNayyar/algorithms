#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main(){
    string s;
    cin>>s;

    stringstream geek(s);
    int x = 0;
    geek >> x;
    cout << "Value of x : " << x;
 
    return 0; 
}