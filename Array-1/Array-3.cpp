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
    int mn=a[0];
    for (int i=0;i<n;i++){
        if (mn>a[i]) mn=a[i];
    }
    cout <<"Minimum is : "<<mn;
}