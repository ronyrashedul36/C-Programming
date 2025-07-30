/*
write a cpp program to  print the following series 1+2+3+....+100
BPSC-SAE-2021
*/

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }

    cout << "The sum of the series 1 + 2 + 3 + ... + 100 is: " << sum << endl;

    return 0;
}
