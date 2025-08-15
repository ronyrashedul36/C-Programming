/*
write a program to find out the number of occurrence of a digit in  a number. Explanation if  input value n and selection value is d.
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    int d;
    int count = 0;
    cout << "Enter the number(n) ";
    cin >> n;
    cout << "Enter the digit to count(d): ";
    cin >> d;
    if (d < 0 || d > 9) {
        cout << "Invalid digit! Must be between 0 and 9." << endl;
        return 0;
    }
    long long temp = n;
    if(temp == 0 && d == 0) {
        count = 1;
    } else {
        while(temp != 0) {
            int lastDigit = temp % 10;
            if(lastDigit == d) {
                count++;
            }
            temp/=10;
        }
    }
    cout << "The digit " << d << " occurs " << count << " time(s) in " << n << "." << endl;

    return 0;
}
