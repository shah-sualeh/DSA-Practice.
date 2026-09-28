#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a=0;
    int b;
    for (int i=0;n>0;i++){
        b=n%10;
        n=n/10;
        a=a+b;
    }
    cout <<a;
}