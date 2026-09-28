#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> v1;
    v1.push_back (1);
    v1.push_back (3);
    // v1.push_back (4);
    v1.push_back (7);
    v1.push_back (9);
    for (int i=0;i<=v1.size()-1;i++){
    //     cout <<v1[i]<<" ";
    }
    vector<int> v2;
    v2.push_back (2);
    v2.push_back (5);
    v2.push_back (6);
    // v2.push_back (8);
    for (int i=0;i<v2.size();i++){
        // cout <<v2[i]<<" ";
    }
    vector<int> v3(v1.size()+v2.size());
    int a=0;
    int j=0;
    int k=0;
    // while (v3.size()-1<(v2.size()+v1.size()-1)){
    //     if (v1[a]<v2[j]){
    //         v3[k]=v1[a];
    //         a++;
    //         k++;
    //     }
    //       if (v2[j]<v1[a]){
    //         v3[k]=v2[j];
    //         j++;
    //         k++;
    //     }
    // }
    while (a < v1.size() && j < v2.size()) {
    if (v1[a] < v2[j]) {
        v3[k] = v1[a];
        a++;
    } else {
        v3[k] = v2[j];
        j++;
    }
    k++;
}

// Don't forget to push any remaining elements from v1 or v2!
while (a < v1.size()) {
    v3[k++] = v1[a++];
}
while (j < v2.size()) {
    v3[k++] = v2[j++];
}
    for (int i=0;i<=v3.size()-1;i++){
        cout <<v3[i]<<" ";
    }
}