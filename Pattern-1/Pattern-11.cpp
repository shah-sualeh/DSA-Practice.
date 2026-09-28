#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout <<" "<<" ";
        }
        for (int m=1;m<=i;m++){
            cout <<"*"<<" ";
        }
        cout <<endl;
    }
    for (int l=1;l<=n;l++){
        for (int k=1;k<=l;k++){
            cout <<" "<<" ";
        }
        for (int m=1;m<=n-l;m++){
            cout <<"*"<<" ";
        }
        cout <<endl;
    }    
}