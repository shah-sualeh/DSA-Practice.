#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a=1;
    for (int i=0;n>0;i++){
        a=a*n;
        n=n-1;
    }
    cout <<a;
}