#include <iostream>
using namespace std;
float area (int r){
    float b;
    b=3.14*r*r;
    return(b);
}
int main (){
    int n;
    cout <<"Enter radius : ";
    cin >>n;
    cout <<"Area of circle is : "<<area (n);
}