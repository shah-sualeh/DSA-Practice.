#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main (){
    string s;
    cout <<"Enter string : ";
    getline(cin,s);
    string temp;
    stringstream a(s);
    while (a>>temp){
        cout <<temp<<endl;
    }
}