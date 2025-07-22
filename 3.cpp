/*
Write a program in C++ to find and display all prime numbers between 1 and a number n, where n is provided by the user.
Sample Input:
Enter a number (n): 20
Sample Output:
Prime numbers between 1 and 20: 2, 3, 5, 7, 11, 13, 17, 19
*/

#include<bits/stdc++.h>

using namespace std;
bool isPrime(int number)
{
 if(number <= 1) {
    return false;
 }
 for(int i = 2; i*i <= number; i++)
 {
     if(number%i==0){
        return false;
     }
 }
 return true;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Prime numbers between 1 and " << n << " are "<< endl;
    for(int i = 2; i <= n; i++)
    {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
