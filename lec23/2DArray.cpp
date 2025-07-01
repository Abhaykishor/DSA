#include<iostream>
using namespace std;

// linear search function for ispresent

bool isPresent(int arr[][3], int target, int row , int col) {

    for ( int row = 0; row < 3; row++) {
        for ( int col = 0; col < 3; col++) {
            if( arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}

// printing row-wise sum
void printRowSum(int arr[][3], int row, int col) {
    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for(int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// printing col wise sum
void printColSum(int arr[][3], int row, int col) {
    for (int col = 0; col < 3; col++) {
        int sum = 0;
        for(int row = 0; row < 3; row++) {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
    cout << endl;
}


// printing largest row sum
int largestRowSum(int arr[][3], int row, int col) {
    int maxi = INT16_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum row sum is : " << maxi << endl;
    return rowIndex;
}

// printing maximum column sum
int largestColSum(int arr[][3], int row, int col) {
    int maxi = INT16_MIN;
    int colIndex = -1;

    for (int col = 0; col < 3; col++) {
        int sum = 0;
        for (int row = 0; row < 3; row++) {
            sum += arr[row][col];
        }
        if (sum > maxi) {
            maxi = sum;
            colIndex = col;
        }
    }
    cout << "The maximum column sum is : " << maxi << endl;
    return colIndex;
}


int main() {

    //create 2d array
    int arr[3][3];

    cout << "Enter the Elements : " << endl;
    //taking inputs as row wise input
    for ( int row = 0; row < 3; row++) {
        for ( int col = 0; col < 3; col++) {
            cin >> arr[row][col];
        }
    }

    cout << "Printing the 2D array : " << endl;
    //printing the 2d array
    for ( int row = 0; row < 3; row++) {
        for ( int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }


    // Linear search 
    cout << "Enter the Element to search : " << endl;
    int target;
    cin >> target;

    if (isPresent( arr, target, 3, 3)) {
        cout << "Element Found" << endl;
    }
    else {
        cout << "Element not Found" << endl;
    }


    cout << "Printing row wise sum :" << endl;
    printRowSum(arr, 3, 3);

    cout << "Printing column wise sum :" << endl;
    printColSum(arr, 3, 3);


    int ansRowIndex = largestRowSum(arr,3,3);
    cout << "Max row is at index : " << ansRowIndex << endl;

    int ansColIndex = largestColSum(arr,3,3);
    cout << "Max column is at index : " << ansColIndex << endl;

    return 0;
}