#include <iostream>
using namespace std;
int main (){
    int m,n;
    cout <<"Enter no. of rows : ";
    cin >>m;
    cout <<"Enter no of columns : ";
    cin >>n;
    int a[m][n];
    cout <<"Enter elements of an array : ";
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    int s=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            s=s+a[i][j];
        }
    }
    cout <<"Sum is : "<<s;
}