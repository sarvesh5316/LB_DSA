#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        int mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={3,8,10,17,1};
    int ele=getpivot(arr,5);
    cout<<ele<<endl;
}
