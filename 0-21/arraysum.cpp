#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,6,8,2,4};
    int sum=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    for( int i=0;i<length;i++){
        sum=sum+arr[i];
    }
    <<sum<<endl;
}
