#include <iostream>
using namespace std;
int nod (int a){
    int i;
    for (i=0;a>0;i++){
        a=a/10;
    }
    return i;
}
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    cout <<"Number of digits in a number : "<<nod (n);
}