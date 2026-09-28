#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int i=1;i<=n;i++){
        int a=i;
        for (int j=1;j<=n-i;j++){
            cout <<" "<<" ";
        }
        for (int k=65;k<=i+64;k++){
            cout <<(char)k<<" ";
        }
        for (int l=67;l<=i+65;l++){
            a=a+1;
            cout <<(char)(a+64)<<" ";
        }
        cout <<endl;
    }
}