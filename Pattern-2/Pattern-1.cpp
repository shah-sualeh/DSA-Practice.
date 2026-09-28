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
        for (int k=1;k<=i;k++){
            cout <<k<<" ";
        }
        for (int l=2;l<=i;l++){
            a=a+1;
            cout <<a<<" ";
        }
        a=a+1;
        cout <<endl;
    }
}