#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size : ";
    cin >>n;
    int arr[n];
    cout <<"Enter elements : ";
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    for (int i=0;i<n;i+=2){
        arr[i]=arr[i]+10;
    }
    for (int i=1;i<n;i+=2){
        arr[i]=(arr[i])*2;
    }
    for (int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}