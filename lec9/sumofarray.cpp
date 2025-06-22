#include<iostream>
using namespace std;

int sumArray(int arr[] , int n) {
    int sum = 0;

    for (int i = 0 ; i < n ; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {

    int size;
    cout << "Enter the size of array "<<endl;
    cin>>size;

    int num[100];

    //taking input for array

    cout << "Enter the array : " << endl;
    for(int i= 0; i <size; i++) {
        cin>>num[i];
    }

    cout << "The Sum of the Array is " << sumArray(num , size) <<endl;

    return 0;
}