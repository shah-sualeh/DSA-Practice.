#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter no of elements : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
    }
    int x;
    cout <<"Enter element you want to search : ";
    cin >>x;
    bool f=false;
    for (int i=0;i<=n-1;i++){
        if (a[i]==x) f=true;
    }
    if (f==true) cout <<"Element found";
    else cout <<"Element not found";
}