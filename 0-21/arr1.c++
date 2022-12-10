
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
 
int main()
{
    int arr[] = { 4, 2, 1, 6, -8, 5 };
 
    int min = INT_MAX, max = INT_MIN;
    for (int i: arr)
    {
        if (i < min) {
            min = i;
        }
 
        if (i > max) {
            max = i;
        }
    }
 
    std::cout << "The min element is " << min << std::endl;
    std::cout << "The max element is " << max << std::endl;
 
    return 0;
}