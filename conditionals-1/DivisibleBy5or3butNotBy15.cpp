#include <iostream>
using namespace std;
int main (){
    int a;
    cout <<"Enter a number : ";
    cin >>a;
    if ((a%3==0 || a%5==0) && a%15!=0) 
    cout <<"Number is divisible by 3 or 5 but not by 15";
    else cout <<"Number is either not divisible by 5 or 3, or divisible by 15";
}