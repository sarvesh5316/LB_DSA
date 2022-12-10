#include <iostream>
using namespace std;
int binsearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if ( key>arr[mid])
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int size,brr[100];
    cout<<"Enter the size of an array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>brr[i];
    }
    cout<<"Enter the element to be searched: ";
    int key;
    cin>>key;
    // int even[10] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int element = binsearch(brr,size,key);
    if(element==-1){
        cout<<"Not Found "<<endl;
    }
    else cout<<" Element is found at Index : "<<element << endl;
}
