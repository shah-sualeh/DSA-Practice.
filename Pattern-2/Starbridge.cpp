#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a=1;
    for (int i=1;i<=2*n-1;i++){
        cout <<"*"<<" ";
    }
    cout <<endl;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout <<"*"<<" ";
        }
        for (int k=1;k<=a;k++){
            cout <<" "<<" ";
        }
        a+=2;
        for (int j=1;j<=n-i;j++){
            cout <<"*"<<" ";
        }
        cout <<endl;
    }
}