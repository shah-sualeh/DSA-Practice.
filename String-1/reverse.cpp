#include <iostream>
using namespace std;
int main (){
    string s;
    cout <<"Enter string (>5) : ";
    getline (cin,s);
    reverse (s.begin()+1,s.begin()+5);
    cout <<s;
}