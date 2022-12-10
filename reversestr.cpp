#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

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

    cout << "string Before reverse is " << endl;
    cout << name << endl;
    int size=getlength(name);
    cout << "Length of string is: " << size << endl;

    reverse(name,size);
    cout << "Reverse of string is: " << endl;
    cout << name << endl;

}
