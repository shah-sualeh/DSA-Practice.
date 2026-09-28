#include <iostream>
using namespace std;
void input (int a[],int n){
    for (int i=0;i<=n-1;i++){
        cin >>a[i];
    }
}
void display (int a[],int n){
    for (int i=0;i<=n-1;i++){
        cout <<a[i]<<" ";
    }
    cout <<endl;
}
void change (int a[],int x,int y){
    a[x]=y;
}
int main (){
     int n;
    cout <<"Enter size : ";
    cin >>n;
    int a[n];
    cout <<"Enter elements : ";
    input (a,n);
    int x;
    cout <<"Enter index : ";
    cin >>x;
    int y;
    cout <<"Enter value :";
    cin >>y;
    display (a,n);
    change (a,x,y);
    display (a,n);
}