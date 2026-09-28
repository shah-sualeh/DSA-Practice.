#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number of terms : ";
    cin >>n;
    int a=1;
    int b=1;
    int s;
    cout <<a<<" "<<b<<" ";
    for (int i=1;n>2;i++){
        s=a+b;
        a=b;
        b=s;
        n=n-1;
        cout <<s<<" ";
    }
}
