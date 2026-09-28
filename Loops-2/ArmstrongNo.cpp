#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int c=n;
    int a=0,s,b=0;
    for (int i=1;n>0;i++){
        a=n%10;
        s=a*a*a;
        b=b+s;
        n=n/10;
        cout <<s<<" ";
    }
    cout <<b<<"\n";
     if (b==c) cout <<"Armstron Number ";
        else cout <<"Not an Armstron Number";
   
}
