#include <iostream>
using namespace std;
int main (){
    int l,b,a,p;
    cout <<"Enter length : ";
    cin >>l;
    cout <<"Enter breadth : ";
    cin >>b;
    a=l*b;
    p=2*(l+b);
    if (a>p) cout <<"Area is greater than perimeter";
    if (a<p) cout <<"Perimeter is greater than area";
}