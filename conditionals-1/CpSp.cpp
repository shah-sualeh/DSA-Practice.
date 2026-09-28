#include <iostream>
using namespace std;
int main (){
    int cp,sp,p,l;
    cout <<"Enter cost price ";
    cin >>cp;
    cout <<"Enter selling price ";
    cin >>sp;
    if ((sp-cp)==0) 
    cout <<"Neither profit Nor Loss";
    if (sp-cp>0) cout <<"Profit : "<<sp-cp;
    if (sp-cp<0) cout <<"Loss : "<<cp-sp;
}