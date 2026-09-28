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
    int b[m][n];
    cout <<"Enter elements of Array 2 : ";
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >>b[i][j];
        }
    }
    cout <<"Sum is : "<<endl;
    int s;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            s=b[i][j]+a[i][j];
            cout <<s<<" ";
        }
        cout <<endl;
    }
}