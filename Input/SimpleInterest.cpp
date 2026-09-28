#include <iostream>
using namespace std;
int main (){
    float p,r,t,s;
    cout <<"Enter principal, rate and time : ";
    cin >>p>>r>>t;
    s=(p*r*t)/100;
    cout <<"Simple interest is : "<<s;
}