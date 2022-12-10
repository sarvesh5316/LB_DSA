#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int inssort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp) //for shifting
            {
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp ;
    }
    return 0;
}
int main()
{
    int brr[6] = {4, 5, 7, 2, 6, 9};
    inssort(brr, 6);
    int size = sizeof(brr) / sizeof(brr[0]);
    cout << size << endl;
    cout << "The sorted elements of array in ascending order are:  ";
    for (int i = 0; i < size; i++)
    {
        cout << brr[i] << " ";
    }
    cout<<endl;
    cout << "The sorted elements of array in Descending order are:  ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << brr[i] << " ";
    }
}
