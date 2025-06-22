#include<iostream>
using namespace std;

int firstOcc( int arr[], int n , int key) {

    int s = 0, e = n-1;
    int mid = s + (e - s) / 2 ;
    int ans = -1;

    while ( s <= e) {

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) {  // right mai jao
            s = mid + 1;
        }
        else if (key < arr[mid]) {  // left mai jao
            e = mid - 1;
        }
        mid = s + (e - s) / 2 ;
    }
    return ans;
}

int lastOcc( int arr[], int n , int key) {

    int s = 0, e = n-1;
    int mid = s + (e - s) / 2 ;
    int ans = -1;

    while ( s <= e) {

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else if (key < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e - s) / 2 ;
    }
    return ans;
}

int totalOcc(int arr[], int n , int key) {

    //total = (last - first ) + 1;

    int totalOcc = (lastOcc(arr, n , key) - firstOcc(arr, n , key)) + 1;

    return totalOcc;
}

int main () {

    int even[10] = {1, 2, 3 , 3 , 3, 3, 3, 3, 5, 8};

    cout << "First occurrence of 3 is at index " <<firstOcc(even, 10 , 3) << endl;


    cout << "Last occurrence of 3 is at index " <<lastOcc(even, 10 , 3) << endl;


    cout << "The total occ of 3 is " << totalOcc(even, 10, 3) <<endl;
    
    return 0;
}