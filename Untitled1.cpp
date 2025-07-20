/*
write the pseudocode/ program (in cpp) to print the common element between two arrays and the total number of such elements found. [assume each element in an array distinct] 

1. Initialize two arrays A[] and B[] with their sizes n and m.
2. Initialize count = 0
3. For each element in array A:
    a. For each element in array B:
        i. If A[i] == B[j], then:
            - Print A[i] as a common element
            - Increment count by 1
4. After loops, print the total count.


*/


#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cout << "Enter size of first array: ";
    cin >> n;
    int A[n];
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter size of second array: ";
    cin >> m;
    int B[m];
    cout << "Enter elements of second array:\n";
    for(int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    int count = 0;
    cout << "Common elements are: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(A[i] == B[j]) {
                cout << A[i] << " ";
                count++;
                break;
            }
        }
    }
    cout << "\nTotal number of common elements: " << count << endl;

    return 0;

}

//Enter size of first array: 4
//Enter elements of first array:
//1 2 3 4
//Enter size of second array: 5
//Enter elements of second array:
//3 4 5 6 7
//Common elements are: 3 4
//Total number of common elements: 2

