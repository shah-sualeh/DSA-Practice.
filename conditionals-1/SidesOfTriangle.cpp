#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout <<"Enter 3 different sides of Triangle : ";
    cin >>a>>b>>c;
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        cout <<"Numbers are sides of triangle";
    }
    else {
        cout <<"Numbers are not sides of triangle";
    }
}