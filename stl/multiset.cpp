// multiset store in sorted but not unique
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(4);
    ms.insert(8);
    ms.insert(9);
    ms.insert(5);
    ms.insert(1);
    ms.insert(7);
    ms.insert(6);
    ms.insert(3);
    ms.insert(3);
    ms.insert(2);
    int cnt=ms.count(3);
    cout<<"Number of occuring is: "<<cnt<<endl;
    ms.erase(ms.find(3));
    int cont=ms.count(3);
    cout<<"Number of occuring is: "<<cont<<endl;
    for(auto it:ms){
    cout<<it<<endl;
    }
}
