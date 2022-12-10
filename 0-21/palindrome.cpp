#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(string name, int n){
    int beg=0;
    int end=n-1;
    remove(name.begin(),name.end()," ");
    while(beg<=end){
        if(name[beg]!=name[end]){
            return 0;
        }
        else{
            beg++;
            end--;
        }
    }
    return 1;
} 

int revstr(char name[],int n){
    int s=0;int e=n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
    return 0;
}
int  getlength(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char str1[20];
    cout<<"Enter your name:"<<" ";
    cin>>str1;
    int length=getlength(str1);
    cout<<"Length is "<<length<<endl;
    cout<<"Before Reverse: "<<str1<<endl;
    revstr(str1,length);
    cout<<"After Reverse: "<<str1<<endl;
    cout<<"Palindrome or Not: "<<checkpalindrome(str1,length)<<endl;
    return 0;
}
