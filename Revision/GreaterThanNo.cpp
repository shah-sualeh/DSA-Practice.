#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
    }
    int x;
    cout <<"Enter number : ";
    cin >>x;
    int c=0;
    for (int i=0;i<=n-1;i++){
        if (x>a[i]) c=c+1;
    }
    cout <<c;
}