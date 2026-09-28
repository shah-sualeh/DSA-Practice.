#include <iostream>
using namespace std;
int hcf(int a,int b){
    int hcf;
    for (int i=1;i<=min(a,b);i++){
        if (a%i==0 && b%i==0) 
        hcf =i;
    }
    return hcf;
}
int gcd(int a,int b){
    int gcd;
    for (int i=min(a,b);i>0;i--){
        if (a%i==0 && b%i==0) 
        gcd =i;
        break;
    }
    return gcd;
}

int main (){
    int n,m;
    cout <<"Enter first number : ";
    cin >>n;
    cout <<"Enter second number : ";
    cin >>m;
    cout <<"HCF is : "<<gcd(n,m);
}