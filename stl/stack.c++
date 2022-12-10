#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void printstack(stack<int>st){
    stack<int>st1=st;
    while(!st1.empty()){
        cout<<st1.top()<<endl;
        st1.pop();

    }
}
int main(){
    stack<int>st;
    st.push(2);
    st.push(7);
    st.push(9);
    st.push(3);
    st.push(8);
    cout<<"top element: "<<st.top()<<endl;
    printstack(st);
    // for(auto it:st){
    //     cout<<it<<endl;
    // }
}
