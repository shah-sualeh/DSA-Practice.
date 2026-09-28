#include <iostream>
using namespace std;
int main (){
    int a[7];
    cout <<"Enter 7 elements : ";
    for (int i=0;i<=6;i++){
        cin >>a[i];
    }
    for (int i=6;i>=0;i--){
        cout <<a[i]<<" ";
    }
}