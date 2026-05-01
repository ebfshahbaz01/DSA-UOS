#include<iostream>
#include<Shabby.h>
#include<CppInUrduByShabby.h>
using namespace std;
int ReverseDigits(int num) {
    int revNum = 0;
    while (num != 0) {
        int digit = num % 10;
        revNum = revNum * 10 + digit;
        num = num / 10;
    }
    return revNum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int reversed = ReverseDigits(n);
    cout << "The reversed number is: " << reversed << endl;
    return 0;
}


/* Explanation of Code :

1. digit=num%10 (for example : 302 % 10 = 2) it will stoore in rev num
2. revNum = revNum * 10 + digit; ( Append the digit to the reversed number )
3. num = num / 10;                 ( Remove the last digit like=, 302 / 10 = 30)

*/


