#include<iostream>
using namespace std;


bool isPossible(int arr[] , int size ,int mid, int value){
  int sum = 0;
  for(int i=0; i<size; i++){
     if(mid < arr[i]){
       sum = sum + arr[i]-mid; 
     }
     if(sum >= value){
     return true;
     }
  }
  return false;
}


int maxInt(int arr[] , int size , int value){
    int maxi = -1;
    int start = 0;
    for(int i=0; i<size; i++){
      maxi = max(maxi,arr[i]);
      }
    int end = maxi;
    int ans = 0;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        if(isPossible(arr,size,mid,value)){
        ans = mid;
         start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[5] = {20,15,10,17};
    cout << maxInt(arr,4,7) << endl;
}