#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());

        for (int i=0; i<nums.size(); i++) {
            temp[(i+k) % nums.size()] = nums[i];
        }

        //copy temp into nums

        nums = temp;
    }


void print (vector<int>& nums) {
    for(int i =0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> nums = {0,2,0,4,5,3,0,9,0};
    int k;
    cout << "Enter the value of k to rotate array : " << endl;
    cin>> k;
    rotate(nums , k);

    print(nums);


    return 0;
}