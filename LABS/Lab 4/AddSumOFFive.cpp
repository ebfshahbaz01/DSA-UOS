#include <iostream>
using namespace std;


int ArraySum(){
	int numbers[5];
    int sum = 0;
	cout << "Enter 5 integers:" << endl;
	for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    cout << "\nTotal Sum: " << sum << endl;
}
int main() {
    ArraySum();
    

    return 0;
}
