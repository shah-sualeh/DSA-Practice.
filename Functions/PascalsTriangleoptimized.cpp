#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int i=0;i<=n;i++){
        int a=1;
        for (int j=0;j<=i;j++){
            cout <<a<<" ";
            a=a*(i-j)/(j+1);
        }
        cout <<endl;
    }
}