#include<iostream>
using namespace std;
int main(){
    int amount,n100,n50,n20,n10;
    n100=n50=n20=n10;
    cin>>amount;
    switch(amount>=100){
        case 1: n100=amount/100 ;
        amount -= n100*100;
        break;
    }
    switch(amount>=50){
        case 1: n50=amount/50 ;
        amount -= n50*50;
        break;
    }
    switch(amount>=20){
        case 1: n20=amount/20 ;
        amount -= n20*20;
        break;
    }
    switch(amount>=10){
        case 1: n10=amount/10;
        amount -= n10*10;
        break;
    }
    cout<<"100 =" <<n100<<endl;
    cout<<"50 =" <<n50<<endl;
    cout<<"20 =" <<n20<<endl;
    cout<<"1 =" <<n10<<endl;

}
