#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void printmaxheap(priority_queue<int>pq){
priority_queue<int>pq1=pq;
    while(!pq1.empty()){
        cout<<pq1.top()<<endl;
        pq1.pop();

    }
}
int main(){
priority_queue<int>pq;
    pq.push(2);
    pq.push(7);
    pq.push(9);
    pq.push(3);
    pq.push(8);
    cout<<"Max element: "<<pq.top()<<endl;
    printmaxheap(pq);

}
