#include <iostream>
using namespace std;
int main (){
    float a,b,c;
    cout <<"Enter number : ";
    cin >>a;
    cout <<"Enter power : ";
    cin >>b;
    float p=1;
    if (b>=0){
        for (int i=1;i<=b;i++){
            p=p*a;
    }
}
    else {
        for (int i=1;i<=(-b);i++){
            p=p*a;
    }
}
    if (a!=0 && b>=0) 
    cout <<a<<" raised to the power "<<b<<" is "<<p;
    else if (a!=0 && b<0)
    cout <<a<<" raised to the power "<<b<<" is "<<1.0/p;
    else if (a==0 && b==0) cout <<"Not Defined ";
}