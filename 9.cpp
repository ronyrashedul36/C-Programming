/*
insertion sort is a simple sorting algorithm.
write a program to sort some given numbers
using insertion sort algorithm.
*/

#include<bits/stdc++.h>

using namespace std;

void insertionSort(int a[], int n)
{
    for(int i = 1; i < n; i++){
        int key = a[i];
        int j = i-1;
        while ( j >= 0 && key < a[j]) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    insertionSort(a, n);

    cout << endl;

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
