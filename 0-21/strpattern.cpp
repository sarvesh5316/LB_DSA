#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    n=5;
    while(i<=n){
        int j=1;
        while(j<=n){
            j=i+j;
            int row=i+j;
            cout<<row;
        }
        cout<<endl;
    i++;
    }
    cout<<endl;
}
