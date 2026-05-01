#include <iostream>
#include <algorithm>

using namespace std;

// Function to read input into the array
void inputArray(int arr[], int size) {
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to calculate the median
double calculateMedian(int arr[], int size) {
    // 1. Sort the array first
    sort(arr, arr + size);

    // 2. Determine if size is odd or even
    if (size % 2 != 0) {
        // Odd: Return the middle element
        return arr[size / 2];
    } else {
        // Even: Return average of the two middle elements
        return (arr[(size / 2) - 1] + arr[size / 2]) / 2.0;
    }
}

int main() {
    const int SIZE = 11;
    int numbers[SIZE];

    // Call input function
    inputArray(numbers, SIZE);

    // Call median function and store result
    double median = calculateMedian(numbers, SIZE);

    cout << "\nSorting complete..." << endl;
    cout << "The Median is: " << median << endl;

    return 0;
}
