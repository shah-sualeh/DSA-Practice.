#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout <<"Enter three different positive integers : ";
    cin >>a>>b>>c;
    if (a>b && a>c) cout <<"Greatest number is : "<<a;
    if (b>a && b>c) cout <<"Greatest number is : "<<b;
    if (c>b && c>a) cout <<"Greatest number is : "<<c;
}