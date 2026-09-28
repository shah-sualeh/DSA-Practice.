#include <iostream>
#include <climits>
using namespace std;
int main (){
    int n;
    cout <<"Enter no of elements : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
    }
    int m=INT_MAX;
    for (int i=0;i<=n-1;i++){
        if (m>a[i]) m=a[i];
    }
    cout <<"Minimum element is : "<<m;
}