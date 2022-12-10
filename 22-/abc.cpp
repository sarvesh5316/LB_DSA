#include<iostream>
#include <bits/stdc++.h>
using namespace std;
char tolower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool palindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(tolower(name[s])!=tolower(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void revstr(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[10];
    cout<<"Enter Your Name: ";
    cin>>name;
    // name[2]='\0';
    cout<<"Your Name is "<<name<<endl;
    int n=getlength(name);
    cout<<"Length is "<<n<<endl;
    revstr(name,n);
    cout<<"Your Name is "<<name<<endl;
    cout<<"Palindrome or not: "<<palindrome(name,n)<<endl;
    int ans= palindrome(name,n);
    if(ans==1){
        cout<<"It is a palindrome"<<endl;
    }
    else cout<<"It is not a palindrome"<<endl;
}
