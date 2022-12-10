#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[100];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    int start=0;
    int end = n-1;
    while(start<=end){
        if(arr[int i]>=arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    cout<<arr<<endl;
}
