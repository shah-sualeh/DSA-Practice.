#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout <<"Enter 3 sides of Triangle : ";
    cin >>a>>b>>c;
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        if (a==b && b==c) cout <<"Equilateral Triangle";
        if (a==b || a==c || b==c) cout <<"Isosceles Triangle";
        if (a!=b && a!=c && b!=c) cout <<"Scalene Triangle";
    }
    else cout <<"Not a Triangle";
}