#include <iostream>
using namespace std;
int main (){
    int m,n;
    cout <<"Enter no. of rows : ";
    cin >>m;
    cout <<"Enter no of columns : ";
    cin >>n;
    int a[m][n];
    cout <<"Enter elements of matrix 1 : ";
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    int b[m][n];
    cout <<"Enter elements of matrix 2 : ";
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >>b[i][j];
        }
    }
    int s=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            s=a[i][j]+b[i][j];
            cout <<s<<" ";
        }
        cout <<endl;
    }
}