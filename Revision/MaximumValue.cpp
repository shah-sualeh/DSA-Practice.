#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
    }
    int b=a[0];
     for (int i=0;i<=n-1;i++){
        if (b<a[i]) b=a[i];
    }
    cout <<b;
}