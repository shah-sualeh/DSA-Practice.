#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a=1;
    int b=5;
    for (int i=1;i<=2*n-1;i++){
        cout <<i<<" ";
    }
    cout <<endl;
    for (int i=1;i<=n;i++){
        int b=i+4;
        for (int j=1;j<=n-i;j++){
            cout <<j<<" ";
        }
        for (int k=1;k<=a;k++){
            cout <<" "<<" ";
        }
        a+=2;
        for (int j=1;j<=n-i;j++){
            cout <<b<<" ";
            b++;
        }
        cout <<endl;
    }
}