// set is something which store unique elements in sorted order
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(1);
    st.insert(4);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(9);
    // st.erase(9);  
     
    for(auto it:st){
        cout<<it<<endl;
    }
}                   