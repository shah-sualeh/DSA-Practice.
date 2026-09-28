#include <iostream>
using namespace std;
int main (){
    int a;
    cout <<"Enter Marks to generate grade : ";
    cin >>a;
    if (a>90 && a<=100) cout <<"Excellent";
    else if (a>80 ) cout <<"Very Good";
    else if (a>70 ) cout <<"Good";
    else if (a>60 ) cout <<"Can do better";
    else if (a>50 ) cout <<"Average";
    else if (a>40 ) cout <<"Below Average";
    else if (a>0 ) cout <<"Fail";
}