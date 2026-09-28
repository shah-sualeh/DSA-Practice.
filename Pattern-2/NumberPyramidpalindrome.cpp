#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a=1;
    for (int i=1;i<=n;i++){
        a=i-1;
        for (int j=1;j<=n-i;j++){
            cout <<" "<<" ";
        }
        for (int k=1;k<=i;k++){
            cout <<k<<" ";
        }
        for (int l=2;l<=i;l++){
            cout <<a<<" ";
            a--;
        }
        cout <<endl;
    }
}