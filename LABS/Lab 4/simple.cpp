#include<iostream>
using namespace std;
void addSimpleArrays(int a[], int b[], int res[], int sizeA, int sizeB) {
    if (sizeA != sizeB) {
        cout << "Sizes do not match!" << endl;
        return;
    }
    for(int i = 0; i < sizeA; i++) {
        res[i] = a[i] + b[i];
    }
}
