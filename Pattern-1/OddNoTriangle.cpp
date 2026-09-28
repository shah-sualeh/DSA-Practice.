#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int i=1;i<=n+4;i++){
        if (i%2!=0){
            for (int j=1;j<=i;j++){
            int a=j;
            if (a%2!=0) cout <<a<<" ";
        }
         cout <<"\n";
        }
    }
}