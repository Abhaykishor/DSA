#include<iostream>
using namespace std;

int binarySearch(int arr[], int size , int key) {

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while ( start <= end ) {

        if (arr[mid] == key) {
            return mid;
        }

        //go to right part
        if (key > arr[mid]) {
            start = mid + 1;
        } 
        //go to left part
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main () {

    int even[6] = { 4 , 5 , 6 , 7 , 8 , 9 };
    int odd[5] = { 2 , 4 , 6 , 8 , 9};

    int key ;

    cout << "Enter the Value of key " << endl;
    cin >> key;

    int evenIndex = binarySearch(even, 6 , key);
    cout << "The index of " << key << " in even array is " <<evenIndex <<endl;

    int oddIndex = binarySearch(odd, 5 , key);
    cout << "The index of " << key << " in odd array is " <<oddIndex <<endl;


    return 0;
}