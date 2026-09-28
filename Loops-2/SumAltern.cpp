#include <iostream>
using namespace std;
int main (){
    int n,s;
    cout <<"Enter number of terms : ";
    cin >>n;        //1-2+3-4+5-6....
    if (n%2==0) cout << (-n/2);
    else cout <<(-n/2+n);
}