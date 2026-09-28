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
    int a,b;
    for (int i=0,j=n-1;i<n;i++,j--){
        a=arr[i];
        b=arr[j];
        if (a==b) cout <<"Palindrome";
        else cout <<"Not a Palindrome";
        break;
    }
}