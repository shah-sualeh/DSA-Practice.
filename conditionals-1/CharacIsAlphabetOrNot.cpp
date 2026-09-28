#include <iostream>
using namespace std;
int main (){
    char ch;
    cout <<"Enter a character : ";
    cin >>ch;
    int z = (char)ch;
    if ((z>64 && z<92) || (z>96 && z<123)) cout <<"Character is alphabet";
    else cout <<"Character is not an alphabet";
}