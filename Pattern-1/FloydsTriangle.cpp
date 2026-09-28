#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    int a=0;
    for (int i=1;i<=n;i++){ 
        for (int j=1;j<=i;j++){
            a=a+1;
            cout <<a<<" ";
        }
        cout <<endl;
   }
}