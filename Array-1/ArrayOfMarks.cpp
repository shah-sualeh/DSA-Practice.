#include <iostream>
using namespace std;
int main (){
    int m[6];
    cout <<"Enter marks of 6 students : ";
    for (int i=0;i<=5;i++){
        cin >>m[i];
    }
    for (int i=0;i<=5;i++){
        if (m[i]<35) cout <<i<<" ";
        else continue;
    }
}