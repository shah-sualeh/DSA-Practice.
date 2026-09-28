#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    for (int i=0;i<n;i++){
        cout <<a[i];
    }
    for (int i=0;i<n;i++){
        int count=1;
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]) count ++;
        }
        if (count==n/2) cout <<"Element present greater than n/2 times : "<<a[i];
        }
}