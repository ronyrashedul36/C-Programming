/*
write a program to sort a list of element using the insertion sort algorithm.
*/

#include<bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>& a)
{

    int n = a.size();
    for(int i = 1; i < n; i++)
        {
            int j = i - 1;
            int key = a[i];
            while(j >= 0 && key < a[j])
                {
                    a[j+1] = a[j];
                    j--;
                }
            a[j+1] = key;
        }

}

int main()
{
    int n;

    cout<< "Enter the number of elements: ";
    cin>>n;
    vector<int> a(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    insertionSort(a);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    cout << endl;
    return 0;
}
