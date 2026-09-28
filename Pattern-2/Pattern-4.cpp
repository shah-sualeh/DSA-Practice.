#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int m=65;m<=2*n+63;m++){
        cout <<(char)m<<" ";
    }
    cout <<endl;
    for (int i=1;i<=n;i++){
        int a=i;
        for (int j=65;j<=n-i+64;j++){
            cout <<(char)j<<" ";
        }
        for (int k=1;k<=2*i-1;k++){
            cout <<" "<<" ";
        }
        for (int l=65;l<=n-i+64;l++){
            a=a+1;
            cout <<(char)(a+63+n)<<" ";
        }
        cout <<endl;
    }
}