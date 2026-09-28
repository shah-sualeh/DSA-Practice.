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
    for (int i=0;i<=n-1;i++){
        if (m<a[i]) m=a[i];
    }
    int sm=a[0];
    for (int i=0;i<=n-1;i++){
        if (sm<a[i] && a[i]!=m) sm=a[i];
    }
    cout <<"Second largest element is : "<<sm;
}