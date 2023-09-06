// Given an integer array containing n elements. Find the element in the array
// for which all the elements to its left are smaller than it and all the elements
// to the right of it are larger than it.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 3, 7, 1, 9, 11}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int *maxLeft = new int[n];
    int *minRight = new int[n];

    maxLeft[0] = arr[0];
    minRight[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        maxLeft[i] = max(maxLeft[i - 1], arr[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        minRight[i] = min(minRight[i + 1], arr[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        if (maxLeft[i] < arr[i] && arr[i] < minRight[i])
        {
            cout << arr[i] << endl;
            delete[] maxLeft;
            delete[] minRight;
            return 0;
        }
    }

    delete[] maxLeft;
    delete[] minRight;

    cout << "No such element found in the array." << endl;
    return 0;
}
