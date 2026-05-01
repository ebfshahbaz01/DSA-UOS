#include <iostream>
using namespace std;

// Function to perform addition
void addMatrices(int r, int c, int A[10][10], int B[10][10]) {
    int sum[10][10];

    // Logic: Add corresponding elements
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Displaying the result
    cout << "\nResultant Matrix (Sum):" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input dimensions
    cout << "Enter rows and columns for Matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for Matrix B: ";
    cin >> r2 >> c2;

    // --- DIMENSION CHECK ---
    // Addition is only possible if rows and columns are identical
    if (r1 != r2 || c1 != c2) {
        cout << "Error: Addition not possible. Matrices must have the same dimensions." << endl;
        return 0;
    }

    int A[10][10], B[10][10];

    // Input Matrix A
    cout << "Enter elements for Matrix A:" << endl;
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    // Input Matrix B
    cout << "Enter elements for Matrix B:" << endl;
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Call function
    addMatrices(r1, c1, A, B);

    return 0;
}
