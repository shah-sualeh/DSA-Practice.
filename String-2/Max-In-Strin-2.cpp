#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main (){
    int n;
    cout <<"Enter size : ";
    cin >>n;
    string v[n];
    cout <<"Enter Numbers : ";
    for (int i=0;i<n;i++){
        cin >>v[i];
    }
    int max=stoi(v[0]);
    string maxS=v[0];
    for (int i=1;i<n;i++){
        int x=stoi(v[i]);
        if (max<x) {
            max=x;
            maxS=v[i];
        }
    }
    cout <<maxS;
}