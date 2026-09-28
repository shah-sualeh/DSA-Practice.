#include <iostream>
using namespace std;
int main (){
    char ch;
    cout <<"Enter character : ";
    cin >>ch;
    int a=(int)ch;
    if (a>47 && a<58) cout <<"Digit";
    else if ((a>64 && a<91) || (a>96 && a<123)) cout <<"Alphabet";
    else cout <<"Special Character";
}