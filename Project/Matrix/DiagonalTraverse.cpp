/*
PROBLEM STATEMENT: Given an m x n matrix mat, return an array of all the elements of the 
array in a diagonal order.

Example:
Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,4,7,5,3,6,8,9]
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    if (mat.empty() || mat[0].empty()) return {};
    
    int rows = mat.size();
    int cols = mat[0].size();
    vector<int> result;
    int r = 0, c = 0;

    for (int i = 0; i < rows * cols; ++i) {
        result.push_back(mat[r][c]);

        if ((r + c) % 2 == 0) {
            if (c == cols - 1) r++;
            else if (r == 0) c++;
            else { 
                r--;
                c++;
            }
        } 
        else {
            if (r == rows - 1) c++;
            else if (c == 0) r++;
            else { 
                r++;
                c--;
            }
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}} ;
    vector<int> ans = findDiagonalOrder(mat) ;
    for(auto it: ans)
    {       
        cout<<it<<" ";
    }
}
