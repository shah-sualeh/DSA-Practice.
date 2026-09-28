#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter number to generate table : ";
    cin >>n;
    int a=n;
    for (int i=1;i<=10;i++){
        cout <<n<<" "<<'*'<<" "<<i<<" "<<'='<<" "<<a<<endl;
        a=a+n;
    }
}