#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter no. of elements : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    int m=1;
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
        m=m*a[i];
    }
    cout <<"Sum is : "<<m;
}