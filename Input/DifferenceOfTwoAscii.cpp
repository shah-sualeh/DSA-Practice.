#include <iostream>
using namespace std;
int main (){
    char ch1,ch2;
    cout <<"Enter first character ";
    cin >>ch1;
    cout <<"Enter second character ";
    cin >>ch2;
    int z=(char)ch1 - (char)ch2;
    cout <<"Difference between ASCII of 2 characters is : "<<z;
}