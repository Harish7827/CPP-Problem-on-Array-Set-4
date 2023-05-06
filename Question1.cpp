// Q1 - Write a user defined function upper() which takes an integer square matrix as an input and its size N and prints the upper half of the matrix.

#include <bits/stdc++.h>
using namespace std;
void upper(vector<vector<int>> arr, int n){
    cout << "The upper half is : " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j >= i){
                cout << arr[i][j] << " ";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int r;
    cout << "Enter the row and column size : ";
    cin >> r;
    vector<vector<int>> arr(r, vector<int>(r));
    cout << "Enter the matrix elements : " << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < r; j++){
            cin >> arr[i][j];
        }
    }
    upper(arr, r);
    return 0;
}
