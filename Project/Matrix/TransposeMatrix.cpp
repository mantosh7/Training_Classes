/*
PROBLEM STATEMENT: Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the 
matrix's row and column indices.

Example:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
*/
#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int r = matrix.size();
    int c = matrix[0].size();

    vector<vector<int>> ans (c,vector<int>(r));

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}} ;
    vector<vector<int>> ans = transpose(matrix) ;
    for(auto it: ans)
    {
        for(auto x:it)
        {
            cout<<x<<" ";
        }
        cout<<endl ;
    }
}