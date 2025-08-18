/*
write a program to sort an array and find max, min value
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i =0 ; i < n-1;i++)
    {
        for(int j = 0; j < n-1-i; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    // Display sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Find min and max (after sorting)
    int minVal = a[0];
    int maxVal = a[n - 1];

    cout << "Minimum value = " << minVal << endl;
    cout << "Maximum value = " << maxVal << endl;
    return 0;
}
