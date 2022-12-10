#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>l1;
    l1.push_back(2);
    l1.push_back(4);
    l1.push_back(6);
    l1.push_front(6);
    // l1.emplace_front();{2,4};
    for(auto it:l1){

    cout<<it<<endl;
    }
}
