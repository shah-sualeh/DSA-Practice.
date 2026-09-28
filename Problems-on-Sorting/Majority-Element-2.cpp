#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    vector <int> a={1,2,3,2,2};
    int n=a.size();
    sort (a.begin(),a.end());
    cout <<"Elent which is present more than n/2 times : "<<a[n/2];
}