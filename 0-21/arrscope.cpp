#include <iostream>
using namespace std;
void update(int arr[], int n)
{
    cout << "Inside Function" << endl;
    arr[0]=120;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Going back to main function" << endl;
}
int main()
{
    int arr[3] = {2, 4, 5};
    update(arr, 3);
    cout << endl
         << "Printing in main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
