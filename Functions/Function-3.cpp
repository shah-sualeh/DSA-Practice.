#include <iostream>
using namespace std;
void Odd (int n,int m){
    int a=n+1;
    for (int i=1;i<m;i++){
        if (a%2!=0) cout <<a<<" ";
        a++;
    }
}
int main (){
    int n,m;
    cout <<"Enter 2 numbers : ";
    cin >>n>>m;
    Odd (n,m);
}