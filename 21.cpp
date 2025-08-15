/*
write a program to evaluate the series: 1*3+2*5+3*7+....+n*(2n+1)
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long sum = 0;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        {
            sum += i * (2 * i + 1);
        }
    cout << "Sum of the series = " << sum << endl;
    return 0;
}
