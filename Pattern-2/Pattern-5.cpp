#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int m=1;m<=n;m++){
        cout <<m<<" ";
    }
    for (int m=n-1;m>=1;m--){
        cout <<m<<" ";
    }
    cout <<endl;
    for (int i=1;i<=n;i++){
        int a=n-i;
        for (int j=1;j<=n-i;j++){
            cout <<j<<" ";
        }
        for (int k=1;k<=2*i-1;k++){
            cout <<" "<<" ";
        }
        for (int l=1;l<=n-i;l++){
            cout <<a<<" ";
            a--;
        }
        cout <<endl;
    }
}