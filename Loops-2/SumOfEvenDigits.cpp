#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a;
    int s=0;
    for (int i=0;n>0;i++){
        a=n%10;
        n=n/10;
        if (a%2==0) 
        s=s+a;
    }
    cout <<"Sum of digits in a number : "<<s;
}