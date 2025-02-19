/*
PROBELM STATEMENT: Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements 
on the secondary diagonal that are not part of the primary diagonal.

Example:
Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
*/

#include<bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int sum = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i==j) || (i+j)==n-1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}} ;
    int ans = diagonalSum(mat) ;
    cout<<"Diagonal sum: "<<ans;
}