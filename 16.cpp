/*
cpp program to find sum of following series:
1 + (1/2) + (1/3) + .. + (1/n)

*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        sum += (1.0/i);
    }
    cout << "Sum of the series 1 + 1/2 + 1/3 + ... + 1/" << n << " = " << sum << endl;

    return 0;
}
