#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout <<"Enter marks of A : ";
    cin >>a;
    cout <<"Enter marks of B : ";
    cin >>b;
    cout <<"Enter marks of C : ";
    cin >>c;
    if (a<b){
        if (a<c) cout <<"A has the least marks";
        if (c<a) cout <<"C has the least marks";
    }
    if (b<a){
        if (b<c) cout <<"B has the least marks";
        if (c<b) cout <<"C has the least marks";
    }
}