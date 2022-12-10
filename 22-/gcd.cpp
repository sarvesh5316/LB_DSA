#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int modgcd(int a,int b){  
    int res=min(a,b);
    while(res!=0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}
int gcd(int a,int b){  
    if(a==0) return b;
    if(b==0) return a;
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter two number for calculating GCD"<<endl;
    cin>>a>>b;
    cout<<"The GCD is: "<<gcd(a,b)<<endl;
    cout<<"The GCD is: "<<modgcd(a,b)<<endl;
}
