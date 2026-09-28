#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter size of array : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements of an array : ";
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    bool f=false;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]) f=true;
        }
    }
    if (f==true) cout <<"Duplicate";
    else cout <<"Not a duplicate";
}