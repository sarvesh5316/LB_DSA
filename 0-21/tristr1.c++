#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    // int count=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+n-row+col-1;
            // cout<<count;
            // count++;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row++;
    }
}
