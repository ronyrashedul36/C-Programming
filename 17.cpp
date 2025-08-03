/*
    C++ Program to find the sum of the following series:
    1 + 1/2 + 1/3 + ... + 1/n
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    // Take input from user
    cout << "Enter the value of n: ";
    cin >> n;

    // Calculate sum of the harmonic series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; // Type casting to ensure floating-point division
    }

    // Output the result
    cout << "Sum of the series 1 + 1/2 + 1/3 + ... + 1/" << n << " = " << sum << endl;

    return 0;
}
