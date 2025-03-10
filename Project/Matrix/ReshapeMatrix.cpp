/*
PROBLEM STATEMENT: In MATLAB, there is a handy function called reshape which can reshape an 
m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows 
and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the 
same row-traversing order as they were.

If the reshape operation with given parameters is possible and legal, output the new reshaped 
matrix; Otherwise, output the original matrix.

Example:
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();
    
    // Check if reshape is possible
    if (m * n != r * c) return mat;
    
    vector<vector<int>> ans(r, vector<int>(c));
    int row = 0, col = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[row][col] = mat[i][j];
            col++;
            if (col == c) {
                col = 0;
                row++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1,2},{3,4}} ;
    int r = 1, c = 4 ;
    vector<vector<int>> ans = matrixReshape(mat,r,c) ;
    for(auto it: ans)
    {
        for(auto x:it)
        {
            cout<<x<<" ";
        }
        cout<<endl ;
    }
}