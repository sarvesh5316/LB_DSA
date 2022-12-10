#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    string str = "sarvesh";

    char name[20];
    cout << "Enter your Name: " << endl;
    cin >> name;

    cout << "Your Name is " << endl;
    cout << name << endl;
    cout << "Length of string is: " << getlength(name)<< endl;
}
