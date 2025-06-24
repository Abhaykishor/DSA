#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n) {

    for (int i = 1; i<n ; i++) {

        bool swapped = false;
        
         //for round 1 to n-1
        for (int j = 0; j < n-i; j++) {
            if(arr[j] > arr[j+1]) {
                //process element till n-i th index
                swap (arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            //already sorted 
            break;
        }
    }

}