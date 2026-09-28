#include <iostream>
using namespace std;
int main (){
    int i;
    int x=0;
    for (i=1;i<=500;i++){
        for (int j=i;j>0;j=j/10){
            int m=j%10;
            x=x+m*m*m;
        }
        if (i==x) cout <<i<<endl;
    // else cout <<"Nothing";
    }
    
}
