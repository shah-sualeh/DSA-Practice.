#include <iostream>
using namespace std;
void swap (int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main (){
    int a,b,temp;
    cout <<"Enter first and second number : ";
    cin >>a>>b;
    swap (a,b);
    cout <<a<<" "<<b;
}