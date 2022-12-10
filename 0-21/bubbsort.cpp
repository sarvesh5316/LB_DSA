#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int bubbsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // bool swapped=false;
        for (int j = 0; j < n - i; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // swapped=true;
            }
        }
        // //for already sorted
        // if(swapped==true){
        //     break;
        // }
    }
    return 0;
}
int main()
{
    int brr[6] = {4, 5, 7, 2, 6, 9};
    bubbsort(brr, 6);
    int size = sizeof(brr) / sizeof(brr[0]);
    // cout<<size<<endl;
    cout << "The sorted elements of array in ascending order are:  ";
    for (int i = 0; i < size; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    cout << "The sorted elements of array in Descending order are:  ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << brr[i] << " ";
    }
}
