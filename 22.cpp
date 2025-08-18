/*
write a program using cpp programming language that reads five numbers from keyboard and display the smaller,
larger and average of those numbers.
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];
    int   sum = 0, smallest = 0, largest = 0;
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < SIZE; i++)
        {
            cin >> numbers[i];
            sum += numbers[i];
            if(smallest == 0 || smallest > numbers[i])
                {
                    smallest = numbers[i];
                }
            if(largest == 0 || largest < numbers[i])
                {
                    largest = numbers[i];
                }

        }
    cout << "Smallest number = " << smallest << endl;
    cout << "Largest number  = " << largest << endl;
    cout << "Average         = " << double(sum/SIZE) << endl;

    return 0;
}
