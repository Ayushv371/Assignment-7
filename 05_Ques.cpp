// Given an array containing n distinct integers in the range [0,n] (inclusive of
// both 0 and n). Find and return the only number of the range that is not 
// present in the array.


#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int expectedSum = (n * (n + 1)) / 2;

    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {3, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missingNumber = findMissingNumber(arr, n);

    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}