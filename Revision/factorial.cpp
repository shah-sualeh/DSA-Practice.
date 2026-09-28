#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a=1;
    int b=0;
    for (int i=0;n>0;i++){
        a=a*n;
        b=10*b;
        b=b+(n%10);
        n=n-1;  
   }
   cout <<b<<" "<<a;
}