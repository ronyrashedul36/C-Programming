/*

Write a program in any programming language (preferably C++)
to calculate the sum of rows and columns of an n x n matrix.
Give the output in the following format:
Sample input matrix:
1 3 4
2 2 4
5 3 3

Sample output:
1 3 4 8
2 2 4 8
5 3 3 11
8 8 11
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int matrix[n][n];
    cout << "\n Enter the elements of the matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "\nSample input Matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSample output:\n";
    for(int i = 0; i < n; i++)
    {
        int rowSum = 0;
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
            rowSum += matrix[i][j];
        }
        cout << rowSum << endl;
    }
    for (int j = 0; j < n; j++)
    {
        int colSum = 0;
        for(int i = 0; i < n; i++)
        {
            colSum += matrix[i][j];
        }
        cout << colSum << " ";
    }
    cout << endl;
    return 0;
}
