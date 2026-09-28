#include <iostream>
using namespace std;
int main (){
    int a,b;
    char ch;
    cout <<"Enter problem : ";
    cin >>a>>ch>>b;
    if (ch=='+') cout <<a+b;
    else if (ch=='-') cout <<a-b;
    else if (ch=='*') cout <<a*b;
    else if (ch=='/') cout <<a/b;
    
}