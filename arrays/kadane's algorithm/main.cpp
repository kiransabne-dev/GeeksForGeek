// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

// Example 1:

// Input:
// N = 5
// arr[] = {1,2,3,-2,5}
// Output: 9
// Explanation: Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.'

#include <iostream>
#include <climits>

using namespace std;

int maxSubarraySum(int arr[], int n){
    int maxSumSoFar = INT_MIN;
    int maxSumTillHere = 0;
    for(int i = 0; i < n; i++){
        maxSumTillHere = maxSumTillHere + arr[i];
        if(maxSumSoFar < maxSumTillHere){
            maxSumSoFar = maxSumTillHere;
        }
        if(maxSumTillHere < 0){
            maxSumTillHere = 0;
        }
    }
    return maxSumSoFar;
}

int main(){
    int arr[] = {1, 2, 3, -2, 5};
    int n = 5;
    int values = maxSubarraySum(arr, n);
    printf("values %d\n", values);
    return 0;
}