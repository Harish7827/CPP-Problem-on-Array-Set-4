// Q2 - A square matrix is said to be an perfect Matrix if both of the following conditions hold:
// a) All the elements in the diagonals of the matrix are non-zero integers.
// b) All other elements except the diagonal elements are 0.
// Given a 2D integer array grid of size n x n representing a square matrix, return true if grid
// is a perfect matrix. Otherwise, return false using functions.

#include <bits/stdc++.h>
using namespace std;
bool helper(vector<vector<int>> grid){
    int n =grid.size();
    int m=grid[0].size();
    for(int i=0;i<n;i++){
        if(grid[i][i]==0){
            return false;
        }
        if(grid[i][n-i-1]==0){
            return false;
        }
        grid[i][i]=-1;
        grid[i][n-i-1]=-1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]!=-1 && grid[i][j]!=0){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int r;
    int c;
    cout<<"Enter the row and column size : ";
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    cout<<"Enter the matrix elements : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int val=helper(arr);
    if(val){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
