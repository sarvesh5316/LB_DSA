#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void printqueue(queue<int>st){
queue<int>st1=st;
    while(!st1.empty()){
        cout<<st1.front()<<endl;
        st1.pop();

    }
}
int main(){
queue<int>st;
    st.push(2);
    st.push(7);
    st.push(9);
    st.push(3);
    st.push(8);
    cout<<"front element: "<<st.front()<<endl;
    cout<<"last element: "<<st.back()<<endl;
    printqueue(st);

}
