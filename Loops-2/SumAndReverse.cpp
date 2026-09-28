#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a,b=0;
    int s=0;
    for (int i=0;n>0;i++){
        b=10*b;
        b=b+(n%10);
        a=n%10;
        n=n/10; 
        s=s+a;
    }
    cout <<"Sum of digits in a number : "<<s<<"\n";
    cout <<"Reverse of number is  : "<<b;
}