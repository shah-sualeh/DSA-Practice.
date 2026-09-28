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
    int p;
    cout <<"Enter number : ";
    cin >>p;
    int c=0;
    for (int i=0;i<=n-1;i++){
        if (a[i]>p) c=c+1;
    }
    cout <<"no of elements greater than "<<p<<" : "<<c;
}