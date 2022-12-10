#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int selsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i+1 ; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        swap(arr[small], arr[i]);
    }
    return 0;
}
int main()
{
    int brr[6] = {4, 5, 7, 2, 6, 9};
    selsort(brr,6);
    int size=sizeof(brr)/sizeof(brr[0]);
    cout<<size<<endl;
    cout<<"The sorted elements of array in ascending order are:  ";
    for(int i=0;i<size;i++){
    cout<<brr[i]<<" ";
    }
    cout<<endl;
    cout<<"The sorted elements of array in Descending order are:  ";
    for(int i=size-1;i>=0;i--){
    cout<<brr[i]<<" ";
    }

}
