#include <iostream>
using namespace std;
int main (){
    int a;
    cout <<"Enter a number : ";
    cin >>a;
    if (a%3==0 && a%5==0) 
    cout <<"Number is divisible by 3 and 5";
    else cout <<"Number is not divisible by 5 and 3";
}