#include <iostream>
#include <algorithm>

using namespace std;

// Function to calculate median
double findMedian(int* arr, int size) {
    // Sort the array
    sort(arr, arr + size);

    // Check if the size of the array is even or odd
    if (size % 2 == 0) {
        // If even, return the average of middle two elements
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        // If odd, return the middle element
        return arr[size / 2];
    }
}

int main() {
    // Input the number of elements
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Allocate memory for the array
    int* arr = new int[n];

    // Input the elements
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate and display the median
    cout << "Median of the array is: " << findMedian(arr, n) << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}