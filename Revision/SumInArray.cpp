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
        s=s+a[i];
    }
     cout <<"Sum is : "<<s;
}