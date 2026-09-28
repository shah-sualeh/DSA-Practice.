#include <iostream>
#include <string>
using namespace std;
int main (){
    string arr[]={"234","2541","1980","7690"};
    int max=stoi(arr[0]);
    string maxS=arr[0];
    for (int i=1;i<4;i++){
        int x=stoi(arr[i]);
        if (max<x) {
            max=x;
            maxS=arr[i];
        }
    }
    cout <<maxS;
}