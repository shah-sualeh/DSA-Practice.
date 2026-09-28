#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter size of array : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements of an array : ";
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    int p=1;
    for (int i=0;i<n;i++){
        p=p*a[i];
    }
    cout <<"Product : "<<p;
}