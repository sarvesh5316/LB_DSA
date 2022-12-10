#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
class Solution {
private: 
    bool valid(char ch){
        if( (ch>='a' && ch<='z')|| (ch>='A' && ch<='Z')|| (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
    char tolower(char ch){
        if((ch >= 'a' && ch <= 'z')||(ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
       }
    }
        bool checkPalindrome(string s) {
        int beg=0;
        int end=s.length()-1;
        while(beg<=end){
            if(s[beg]!=s[end]){
                return 0;
            }
            else{
                beg++;
                end--;
            }
        }
        return 1;
    }
    
public:
   bool isPalindrome(string s){
       string temp="";
       
       for(int j=0;j<s.length();j++){
           if(valid(s[j])){
               temp.push_back(s[j]);
           }
       }
       for(int j=0;j<temp.length();j++){
           temp[j]=tolower(temp[j]);
       }
       return checkPalindrome(temp);
   }

};