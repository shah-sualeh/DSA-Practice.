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
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout <<a[j][i]<<" ";
        }
        cout <<endl;
    }
}