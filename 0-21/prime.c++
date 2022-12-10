#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Any Number to check Prime number"<<endl;
    cin>>n;
    int i;
    int count=0;
    for(i=1;i<=n;i++){
       if(n%i==0)
       count++;
    }
    if(count==2)
        cout<<"It is a prime Number";
    
    else
        cout<<"It is  not a prime Number";
}