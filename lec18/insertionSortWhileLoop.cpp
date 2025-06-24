#include<vector>
using namespace std;

void insertionSort(vector<int> &arr , int n) {
    for(int i = 1 ; i < n ; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) 
        {
            //shift
            arr[j+1] = arr[j];
            j--;
        }

        //copy temp value
        arr[j+1] = temp;
    }
}