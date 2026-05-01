#include <iostream>
using namespace std;

// Function to find the maximum value in an array
int findMax(int DATA[], int size) {
    // Start by assuming the first element is the maximum
    int maxNum = DATA[0];

    // Traverse the array starting from the second element
    for (int i = 1; i < size; i++) {
        if (DATA[i] > maxNum) {
            maxNum = DATA[i]; // Update max if a larger number is found
        }
    }

    return maxNum; // Return the final "winner"
}

int main() {
    // 1. Initialize the array DATA
    int DATA[] = {45, 78, 12, 90, 33, 56, 101, 2};
    
    // Calculate size
    int size = sizeof(DATA) / sizeof(DATA[0]);

    // 2. Call the function and store the result
    int maxResult = findMax(DATA, size);

    // 3. Output the result
    cout << "Array DATA: ";
    for(int i = 0; i < size; i++) cout << DATA[i] << " ";
    
    cout << "\nMaximum Number: " << maxResult << endl;

    return 0;
}
