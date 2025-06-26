#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {

    //shift all non zero element to the left
    int nonZero = 0;
    for (int j = 0; j < nums.size() ; j++) {
        if(nums[j] != 0) {
            swap(nums[j] , nums[nonZero]);
            nonZero++;
        }
    }
}

void print (vector<int>& nums) {
    for(int i =0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> nums = {0,2,0,4,5,3,0,9,0};

    moveZeroes(nums);

    print(nums);


    return 0;
}