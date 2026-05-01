bool tryMultiplyMatrices(int A[10][10], int B[10][10], int Res[10][10], 
                         int rA, int cA, int rB, int cB) {
    
    // 1. The Logical Condition Check
    if (rA != cB) {
        cout << "Error: Rows of A must equal Columns of B." << endl;
        return false; // Exit function because condition failed
    }

    // 2. The Multiplication Logic
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            
            Res[i][j] = 0; // Reset cell for summation
            
            for (int k = 0; k < cA; k++) {
                Res[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return true; // Operation successful
}
