#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number : ";
    cin >>n;
    for (int i=n;i>=1;i=i-3){
        if (i>0) cout <<i<<" ";
    }
}