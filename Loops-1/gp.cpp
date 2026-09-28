#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number of terms : ";
    cin >>n;
    int a=1;
    for (int i=1;i<=n;i=i+1){
        cout <<a<<" ";
        a=a*2;
    }
}