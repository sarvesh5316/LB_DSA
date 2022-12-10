#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printminheap(priority_queue<int, vector<int>,greater<int>> hpq){
    priority_queue<int, vector<int>, greater<int>> hpq1 = hpq;
    while(!hpq1.empty()){
        cout<<hpq1.top()<<endl;
        hpq1.pop();
    }
}
int main()
{
    priority_queue<int, vector<int>, greater<int>> hpq;
    hpq.push(2);
    hpq.push(9);
    hpq.push(8);
    hpq.push(4);
    hpq.push(1);
    hpq.emplace(10);
    cout << "Min element is: "<<hpq.top() << endl;
    printminheap(hpq);
}