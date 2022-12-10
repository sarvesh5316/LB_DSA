#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(10);
    v.emplace_back(4000);
    v.push_back(15);
    v.push_back(10);
    v.push_back(7);
    // v.erase(v.begin()+2,v.end()-2);
    v.insert(v.end() - 2, 2, 100);
    vector<int> v2(5, 3);
    v.insert(v.begin() + 5, v2.begin(), v2.end());
    // for swapping two vector
    // v.swap(v2);

// lower_bound − The lower bound search returns the position where the element is found.
    int ind=lower_bound(v.begin(),v.end(),5)- v.begin();
    cout<<ind<<endl;

// upper_bound − The upper bound search returns the position of the element that is higher than the passed element.
    int ine=upper_bound (v.begin(),v.end(),5)- v.begin();
    cout<<ine<<endl;
    for (auto c : v)
    {
        cout << c << endl;
    }
    cout << "The size of vector is: " << v.size() << endl;
    // for sorting
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << endl;
    }
    cout<<"Vector is Empty or Not: " << v.empty() << "\n";
    // o------false and 1------true
    // For deleting vector in one time 
    v.clear(); 
    cout << "The size of vector is: " << v.size() << endl;
    cout<<"Vector is Empty or Not: " << v.empty() << "\n";
}
