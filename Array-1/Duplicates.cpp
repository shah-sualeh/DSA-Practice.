#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter no. of elements : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
    }
    int m=a[0];
    bool f=false;
    for (int i=0;i<=n-1;i++){
        if (m!=a[i]) f=true;
        m++;
    }
    if (f==true) cout <<"Duplicate";
    else cout <<"Not a Duplicate";
}