/*
How many bits have to change to convert int A to int B?
sample A  =31 and B = 14

*/
#include<bits/stdc++.h>

using namespace std;

int countBitChanges(int a, int b)
{

    int xorResult = a^b;
    int count = 0;
    while(xorResult != 0)
        {
            count += xorResult & 1;
            xorResult >>= 1;
        }
    return count;
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << "Number of bits to change: " << countBitChanges(a, b) << endl;

    return 0;
}
