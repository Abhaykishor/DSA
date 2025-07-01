//1886. Determine Whether Matrix Can Be Obtained By Rotation

#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        //rotation by 0 degree
        if(mat == target) return true;

        //rotation for 90,180,270 degree
        for (int k = 0; k < 3; k++) {

        //transpose the matrix
        for(int i=0; i < mat.size(); i++) {
            for(int j=0; j < i; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        //reverse the matrix
        for (int i = 0; i < mat.size(); i++) {
            reverse(mat[i].begin(), mat[i].end());
        }


        if (mat == target) return true;


        }
        
        return false;
    }
};