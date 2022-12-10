#include<iostream>
using namespace std;
bool linsearch(int arr[], int size , int key ){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 0;
   
}

int main(){
    int key;
    int arr[5]={8,2,3,-34,9};
    cout<<"Enter the element to be search"<<endl;
    cin>>key;
    bool found=linsearch(arr,10,key);
    if(found){
        cout<<"Element is Present"<<endl;
    }
    else{
        cout<<"Element is absent"<<endl;
    }
    return 0;
}
