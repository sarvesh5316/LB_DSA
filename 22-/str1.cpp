#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void nullrevstr(string name,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        for(int i=0;i<n;i++){
            if(name[i]=='\0'){
                swap(name[s++],name[e--]);
            }
        }
    }
}
int main(){
    char str[25];
    // string str="My name is Khan";
    cin.getline(str,25);
    int n=25;
    cout<<n<<endl;
    
    cout<<nullrevstr(str,n)<<endl;
    
}
