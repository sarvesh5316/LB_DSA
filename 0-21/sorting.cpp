#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={0,0,1,1,2,2,1,0,2,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int temp;
        if(arr[i]<arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
