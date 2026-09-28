#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int i=1;i<=n-1;i++){
        int a=n;
        for (int j=2;j<=i;j++){
            cout <<" "<<" ";
        }
        cout <<"*"<<" ";
        for (int l=1;l<=n-i;l++){
            cout <<" "<<" ";
        }
        for (int l=1;l<=n-i-1;l++){
            cout <<" "<<" ";
        }
        cout <<"*"<<" ";
        cout <<endl;
    }
    for (int i=1;i<=2*n-1;i++){
        if (i!=n) cout <<" "<<" ";
        else cout <<"*"<<" ";
    }
}