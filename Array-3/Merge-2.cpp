#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> v1;
    v1.push_back (1);
    v1.push_back (3);
    v1.push_back (4);
    v1.push_back (7);
    v1.push_back (9);
    for (int i=0;i<=v1.size()-1;i++){
        cout <<v1[i]<<" ";
    }
    cout <<endl;
    vector<int> v2;
    v2.push_back (1);
    v2.push_back (3);
    v2.push_back (4);
    v2.push_back (7);
    v2.push_back (9);
    for (int i=0;i<=v1.size()-1;i++){
        cout <<v2[i]<<" ";
    }
    
}