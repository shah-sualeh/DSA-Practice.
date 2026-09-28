#include <iostream>
using namespace std;
int main (){
    char ch;
    cout <<"Enter character : ";
    cin >>ch;
    int a=(int)ch;
    if ((a>64 && a<91) || (a>96 && a<123)){
        if (a==65|| a==69|| a==73|| a==79|| a==85|| a==97|| a==101|| a==105|| a==111|| a==117){
            cout <<"vowel";
        }
        else cout <<"Consonant";
    }
    else cout <<"Not an Alphabet";
}
    