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
    int x=10;
    for (int i=0;i<=v.size()-2;i++){
        for (int j=i+1;j<=v.size()-1;j++){
            if (v[i]+v[j]==x) cout <<i<<" "<<j<<endl;
        }
    }
}