/*
write a program in any language (cpp) that takes two matrices A and B as inputs. Ensure your code handles matrices of different dimensions.
*/
#include<bits/stdc++.h>


using namespace std;

void inputMatrix(vector<vector<int>>& matrix, int rows, int cols, char name)
{
    cout << "Enter elements of Matrix " << name << " (" << rows << "x" << cols<< "):\n";
    matrix.resize(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
                {
                    cout <<name << "[" << i << "][" << j << "]: ";
                    cin >> matrix[i][j];
                }
        }
}

void printMatrix(const vector<vector<int>>& matrix, char name)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    cout << "Matrix " << name << ":\n";
    for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
                {
                    cout << matrix[i][j] << " ";
                }
            cout << endl;
        }

}
int main()
{
    int rowA, colsA, rowB, colsB;
    cout << "Enter number of rows and columns for Matrix A: ";
    cin >> rowA >> colsA;
    cout << "Enter number of rows and columns for Matrix B: ";
    cin >> rowB >> colsB;
    vector<vector<int>> A,B;
    inputMatrix(A, rowA, colsA, 'A');
    inputMatrix(B, rowB, colsB, 'B');
    cout << endl;
    printMatrix(A, 'A');
    printMatrix(B, 'B');
    return 0;
}
