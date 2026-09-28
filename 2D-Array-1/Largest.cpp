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
    int l=a[0][0];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (l<a[i][j]) l=a[i][j];
        }
    }
    cout <<"Largest number is : "<<l;
}