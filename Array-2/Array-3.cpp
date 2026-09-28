#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size of an array : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements of an array : ";
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    int m=a[0];
    bool f=false;
    for (int i=1;i<n;i++){
        if (m<a[i]) f=true;
        else f=false;
        m++;
    }
    if (f==true) cout <<"Sorted";
    else cout <<"Not Sorted";   
}