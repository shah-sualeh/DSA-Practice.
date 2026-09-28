#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    char ch;
    for (int i=1;i<=n;i++){
        for (int j=65;j<=64+i;j++){
            cout <<(char)j<<" ";
        }
        cout <<endl;
    }
}