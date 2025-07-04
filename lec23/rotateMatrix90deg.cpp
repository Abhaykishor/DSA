#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose the matrix

        for(int i=0; i < matrix.size(); i++) {
            for(int j=0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //reverse the matrix
        for (int i = 0; i < matrix.size(); i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};