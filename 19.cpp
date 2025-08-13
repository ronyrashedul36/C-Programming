/*
write a program in cpp to print the first 100 prime numbers.
*/
#include<bits/stdc++.h>

using namespace std;
bool isPrime(int num)
{

    if(num < 2)
        {
            return false;
        }

    for(int i = 2; i *i <= num; i++)
        {
            if(num % i == 0)
                {
                    return false;
                }
        }
    return true;
}
int main()
{
    int count = 0;
    int num = 2;
    cout << "First 100 prime numbers:\n";
    while(count <= 100)
        {
            if(isPrime(num))
                {
                    cout << num << " ";
                    count++;
                }
            num++;
        }
    cout << endl;
    return 0;
}
