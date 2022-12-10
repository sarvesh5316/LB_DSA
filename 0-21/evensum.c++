#include<iostream>
using namespace std;
int main(){
    int i=1,n,sum=0;
    cout<<"Enter the Number upto which you need Sum: "<<endl;
    cin>>n;
    while(i<=n){
        if(i%2==0)
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum is: "<<sum<<endl;
}