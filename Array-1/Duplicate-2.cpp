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
        for (int j=i+1;j<=n-1;j++){
            if (a[i]==a[j]) f=true;
        }
    }
    if (f==true) cout <<"Duplicate found";
    else cout <<"Duplicate not found";
    
}