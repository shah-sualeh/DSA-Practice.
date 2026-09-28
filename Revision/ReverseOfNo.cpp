#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a=0;
    for (int i=0;n>0;i++){
       a=10*a;
       a=a+(n%10);
       n=n/10;
    }
    cout <<a;
}