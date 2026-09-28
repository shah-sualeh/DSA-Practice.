#include <iostream>
using namespace std;
int main (){
    int x1,x2,x3,y1,y2,y3;
    cout <<"Enter point-1 (x1,y1) : ";
    cin >>x1>>y1;
    cout <<"Enter point-2 (x2,y2) : ";
    cin >>x2>>y2;
    cout <<"Enter point-3 (x3,y3) : ";
    cin >>x3>>y3;
    if ((y3-y2)/(x3-x2) == (y2-y1)/(x2-x1)){
        cout <<"Points lie on same line";
    }
    else cout <<"points don't lie on same line";
}