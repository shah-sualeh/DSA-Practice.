#include <iostream>
using namespace std;
int main (){

//---------- BASICS ------------

// cin : >>
// cout : <<

// a%b=a (if a<b)
// a%a=0
// a%(-b)=a%b
// (-a)%b=-(a%b)

//Type Casting :
// int x;
// cin >>x;
// float y=(float)x;
// cout <<y/2;

//char data type :
// char ch ='a';
// cout <<ch;

//ASCII values :
// a -> 97, A ->65, 0 ->48

//To get ASCII value :
// char ch ='a';
// cout <<(int)ch;

//To get char from int :
// int x=65;
// cout <<(char)x;

//float a=5/2 gives 2;
//float b=5.0/2 gives 2.5;

//Priority : %, /, *  >  +, - 

// ----------------------- CONDITIONALS ---------------------------

/* 
if ( )
else if ( )             --> terminates at a condition which is true
else                    --> if () if () if () : checks all conditions
*/

/*
&& (and)    --> Both conditions should be true
|| (or)     --> Works even if a single condition is true
*/

// Ternary Operator :
/*
expression 1 ? expression 2 : expression 3 ;
(condition) ? if true : if false ;
eg,
(n%2==0) ? cout <<"Even" : cout <<"Odd" ;
*/

// Switch Statement :
/*
switch (integer expression){
case constant 1 :
do this ;
case constant 2 :
do this ;
case constant 3 :
do this ;
default :
do this ;
}
*/
}