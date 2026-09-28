#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int i=1;i<=n;i++){
        int a=0;
        for (int j=65;j<=64+i;j++){
            a=a+1;
            if (i%2!=0) cout <<a<<" ";
            else cout <<(char)j<<" ";
        }
        cout <<endl;
    }
}