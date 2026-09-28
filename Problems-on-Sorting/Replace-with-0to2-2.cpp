#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main (){
    int a[]={23,54,89,32};
    int n=4;
    
    int x=0;
    for (int i=0;i<n;i++){
        int m=INT_MAX;
        int mx=-1;
        for(int j=0;j<n;j++){
            if (a[j]<1) continue;
            else if (m>a[j]){
                    m=a[j];
                    mx=j; 
            }
        }
        a[mx]=-x;
        x++;
    }
    for (int i=0;i<n;i++){
        cout <<-(a[i])<<" ";
    }
}