#include <iostream>
using namespace std;

// Logical function to traverse and square each element
void computeSquare(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        // Square the element (val = val * val)
        arr[i] = arr[i] * arr[i];
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[] = {3, 5, 7, 9, 11};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Before squaring: ";
    printArray(numbers, n);

    // Call the logical function
    computeSquare(numbers, n);

    cout << "After squaring:  ";
    printArray(numbers, n);

    return 0;
}
