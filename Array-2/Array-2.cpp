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
    for (int i=0;i<n;i++){
        if (m<a[i]) m=a[i];
    }
    cout <<m<<" ";
    int sm=a[0];
     for (int i=0;i<n;i++){
        if (sm<a[i] && a[i]!=m) sm=a[i];
    }
    cout <<sm<<" ";
    int tm=a[0];
     for (int i=0;i<n;i++){
        if (tm<a[i] && a[i]!=sm && a[i]!=m) tm=a[i];
    }
    cout <<tm;
}