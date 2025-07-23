/*
write a function which receives an array of integers as parameter and print the numbers divisible by 3 in the array.
*/

#include<bits/stdc++.h>

using namespace std;

void printDivisibleBy3(int numbers[], int n) {
cout << "Numbers divisible by 3 are: ";
for(int i = 0; i < n; i++) {
    if(numbers[i] % 3 == 0) {
        cout << numbers[i] << " ";
    }
}
cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int numbers[n];
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    printDivisibleBy3(numbers, n);
    return 0;
}
