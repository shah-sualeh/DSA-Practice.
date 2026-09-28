#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout <<"Enter point x and y : ";
    cin >>a>>b;
    if (a==0 && b!=0) cout <<"Point lies on Y-axis";
    if (a!=0 && b==0) cout <<"Point lies on X-axis";
    if (a!=0 && b!=0) cout <<"Point neither lies on X-axis nor Y-axis";
    if (a==0 && b==0) cout <<"Point lies at Origin";
}