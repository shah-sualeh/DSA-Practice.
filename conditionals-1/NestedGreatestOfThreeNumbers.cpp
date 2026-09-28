#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout <<"Enter three different positive integers : ";
    cin >>a>>b>>c;
    if (a>b){
        if (a>c) cout <<a<<" is Greatest";
        else cout <<c<<" is Greatest";
    }
    if (b>a){
        if (b>c) cout <<b<<" is Greatest";
        else cout <<c<<" is Greatest";
    }
}