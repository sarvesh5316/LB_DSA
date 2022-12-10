#include<iostream>
#include <bits/stdc++.h>
using namespace std;
char maxocc(string s){
    char arr[27]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int num=0;
        num=ch-'a';
        arr[num]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans=i;
        }
    }
    return ans+'a';
}
int main(){
    string str="aaabbbb";
    cout<<maxocc(str)<<endl;
}
