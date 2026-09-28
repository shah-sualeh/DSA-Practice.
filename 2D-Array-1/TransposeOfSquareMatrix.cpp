#include <iostream>
using namespace std;
int main (){
    int m;
    cout <<"Enter no. of rows and columns of square matrix : ";
    cin >>m;
    int a[m][m];
    cout <<"Enter elements of an array : ";
    for (int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            cin >>a[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<m;j++){
            cout <<a[j][i]<<" ";
        }
        cout <<endl;
    }
}