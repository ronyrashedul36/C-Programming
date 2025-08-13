/*
write a program in cpp to find the sum of  following series. 1^2-2^2+5^2-...+n^2
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <=n ;i++)
    {
        if(i%2 == 0) {
            sum -= i*i;
        } else {
            sum += i*i;
        }
    }
    cout << "Sum of the series = " << sum << endl;
    return 0;
}
