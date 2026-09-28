#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : "; cin >>n;
    int i;
    for (i=0;n>0;i++){
        n=n/10;
    }
    cout <<i;
}