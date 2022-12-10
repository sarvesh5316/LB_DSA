#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int arr[n]={2,4,5,7,8,9,1,6,3,10};
    sort(arr,arr+n);
    for(auto it: arr){
        cout<<it<<endl;
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    for(auto it: arr){
        cout<<it<<endl;
    }
}
