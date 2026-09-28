#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int i;
    int a;
    for ( i=0;n!=0;i++){

        n=n/10;
    }
    if (a==1) cout <<"No. of digits : "<<1;
    else cout <<"No. of digits : "<<i;
}
