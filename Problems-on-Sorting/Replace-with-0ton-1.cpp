#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main (){
    int a[]={23,54,89,32};
    int n=4;
    vector <int> r(n,0);
    
    int x=0;
    for (int i=0;i<n;i++){
        int m=INT_MAX;
        int mx=-1;
        for(int j=0;j<n;j++){
            if (r[j]==1) continue;
            else if (m>a[j]){
                    m=a[j];
                    mx=j; 
            }
        }
        a[mx]=x;
        r[mx]=1;
        x++;
    }
    for (int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
}