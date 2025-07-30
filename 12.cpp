/*
write a cpp program to find whether the given number is an Armstrong number or not ?
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        for(int i = 1; i < n; i++) {

        }
        result += round(pow(remainder, n));
        originalNum /= 10;
    }

    // Check if it's an Armstrong number
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
