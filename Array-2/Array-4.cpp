#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size of an array : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements of an array : ";
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    int e=0;
    for (int i=0;i<n;i+=2){
        e=e+a[i];
    }
    int o=0;
     for (int i=1;i<n;i+=2){
        o=o+a[i];
    }
    cout <<"Difference is : "<<e-o;
}