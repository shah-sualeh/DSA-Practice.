#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number of terms : ";
    cin >>n;
    int a=1;
    int b=1;
    int s=1;
    for (int i=0;n>2;i++){
        s=a+b;
        a=b;
        b=s;
        n=n-1;
    }
    cout <<s;
}