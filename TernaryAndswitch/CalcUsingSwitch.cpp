#include <iostream>
using namespace std;
int main (){
    int a,b;
    char ch;
    cout <<"Enter problem : ";
    cin >>a>>ch>>b;
    switch (ch){
        case '+' :
        cout <<a+b;
    }
    switch (ch){
        case '-' :
        cout <<a-b;
    }
    switch (ch){
        case '*' :
        cout <<a*b;
    }
    switch (ch){
        case '/' :
        cout <<a/b;
    }
}