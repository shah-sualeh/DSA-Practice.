#include <iostream>
using namespace std;
int main (){
    int m;
    cout <<"Enter no of rows : ";
    cin >>m;
    int n;
    cout <<"Enter no of columns : ";
    cin >>n;
    int a[m][n];
    cout <<"Enter elements of Array 1 : ";
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    int a1,a2,b1,b2;
    cout <<"Enter indices of 2 elements : ";
    cin >>a1>>b1>>a2>>b2;
    int s;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            s=a[a1][b1]+a[a2][b2];
        }
    }
    cout <<s;
}