#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int>v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(3);
    int x=4;
    int ind=-1;
    for (int i=0;i<=v.size()-1;i++){
        if (v[i]==x) ind=i;
    }
    cout <<ind;

//     for (int i=v.size()-1;i>=0;i--){
//         if (v[i]==x) ind=i;
//         break;
//     }
//     cout <<ind;
}