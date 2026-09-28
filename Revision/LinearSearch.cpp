#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    int s=0;
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
    }
    int x;
    cout <<"Enter element which you need to search : ";
    cin >>x;
    for (int i=0;i<=n-1;i++){
        if (a[i]==x) cout <<i<<" ";
    }
}