/*
write a factorial program in cpp using recursion.
*/
#include<bits/stdc++.h>

using namespace std;

int factorial(int num)
{

    if(num == 0 || num == 1)
        {
            return 1;
        }
    return num * factorial (num-1);

}

int main()
{
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    if(num < 0)
        {
            cout << "Factorial is not defined for negative numbers." << endl;
        }
    else
        {
            cout << "Factorial of " << num << " is: " << factorial(num) << endl;
        }
    return 0;
}
