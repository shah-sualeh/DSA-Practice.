#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size : ";
    cin >>n;
    int a[n];
    cout <<"Enter marks : ";
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
        // if (a[i]<35) cout <<i<<" ";
    }
    cout <<&a<<endl;
    cout <<a;
}