#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number of elements : ";
    cin >>n;
    int a[n];
    int s=0;
    cout <<"Enter elements : ";
    for (int i=0;i<=n-1;i++){
        cin>>a[i];
        s=s+a[i];
    }
    cout <<"Sum of elements is : "<<s;
}