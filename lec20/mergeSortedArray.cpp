#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i=0, j=0;
    int k=0;

    while(i<n && j<m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    //copy first array k element ko
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    //copy kardo second array ke k element ko
    while(j<m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}


int main() {

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);


    return 0;
}


//for leetcode question use vector

/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int>ans;
        
        while(i<m and j<n)
        {
            if(nums1[i]<nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)   // push remaining elements if any
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n) // push remaining elements if any
        {
            ans.push_back(nums2[j]);
            j++;
        }
        nums1=ans;   //assign ans to nums1 as we don't need to return ans (its a void function)
      //  return ans;
    }
};
*/