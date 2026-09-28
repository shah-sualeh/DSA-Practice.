#include <iostream>
using namespace std;
int main() {
int n;
cout <<"Enter number : ";
cin >> n;
    if(n==1) cout <<"1 is neither prime nor composite";
    else if (n==2) cout <<"Prime";
for (int i=2;i<=(n-1);i++){
    if (n%i==0) cout <<"Composite";
    else cout <<"Prime";
    break;
}
}