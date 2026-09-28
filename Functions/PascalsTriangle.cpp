#include <iostream>
using namespace std;
int F (int x){
    int a=1;
    for (int i=1;i<=x;i++){
        a=a*i;
    }
    return a;
}
int C (int n,int r){
    int nCr = F(n)/(F(r)*F(n-r));
    return nCr;
}
int main (){
    int n,r;
    cout <<"Enter number n : ";
    cin >>n;
    int a=0;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<=i;j++){
            a=C(i,j);
            cout <<a<<" ";
        }
        cout <<endl;
    }
}
