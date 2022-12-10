#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    cout << "Enter the size of array: ";
    int n, key;
    cin >> n;
    cout<<"Enter Element one by one"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout << "Enter element to search: ";
    cin >> key;
    bool res = binary_search(arr.begin(), arr.end(), key);
    if (res == 1)
    {

        cout << "Element is in the array" << endl;
    }
    else cout << "Element is not in the array" << endl;
    
}
