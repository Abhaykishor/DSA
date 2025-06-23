#include<vector>
using namespace std;


bool isPossible(vector<int> &boards, int k, int n, long long int mid) {

    long long int painterCount = 1; // Starting with first painter

    long long int distanceSum = 0;

    for (int i = 0; i < n; i++) {
        if (k > n) {
            return false;
        }
        if (boards[i] + distanceSum <= mid) 
        {
            distanceSum += boards[i];
        } 
        else 
        {
            painterCount++;  //starting with second painter
            if (painterCount > k || boards[i] > mid)
            {
                return false;
            }
            distanceSum = boards[i];
        }
        if (painterCount > k) 
        {
            return false;
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    long long int s = 0;
    long long int sum = 0;
    long long int e;
    long long int ans = -1;
    int n = boards.size();
    for (int i = 0; i < n ; i++) {
        sum += boards[i];
    }

    e=sum;

    long long int mid = s + (e-s)/2;

    while (s <= e ) {
        if (isPossible(boards, k, n, mid))
        {
            //possible solution
            ans = mid;
            e = mid-1;
        }
        else 
        {
            //not possible solution
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}