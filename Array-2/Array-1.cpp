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
    int x;
    cout <<"Enter target : ";
    cin >>x;
    int count=0;
    for (int i=0;i<n;i++){
        if (x<a[i]) count++;
    }
    cout <<"Number of elements greater than "<<x<<" : "<<count;
}