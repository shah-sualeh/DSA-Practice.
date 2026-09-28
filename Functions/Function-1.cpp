#include <iostream>
using namespace std;
int square (int a){
    int b;
    b=a*a;
    return(b);
}
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    cout <<"Square of number is : "<<square (n);
}