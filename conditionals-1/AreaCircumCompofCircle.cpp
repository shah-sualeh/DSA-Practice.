#include <iostream>
using namespace std;
int main (){
    int r;
    cout <<"Enter radius : ";
    cin >>r;
    float a=3.1415*r*r;
    float c=2*3.1415*r;
    if (a>c) cout <<"Area is greater than circumference";
    if (a<c) cout <<"Circumference is Greater than area";
}