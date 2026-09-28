#include <iostream>
using namespace std;
int fact (int x){
    int a=1;
    for (int i=1;i<=x;i++){
        a=a*i;
    }
    return a;
}
int main (){
    int n,r;
    cout <<"Enter number n : ";
    cin >>n;
    cout <<"Enter number r : ";
    cin >>r;
    int f1 = fact (n);
    int f2 = fact (n-r);
    int f3 = fact (r);
    float nPr = f1/f2;
    float nCr = f1/(f2*f3);
    cout <<"nPr : "<<nPr<<endl<<"nCr : "<<nCr;
}