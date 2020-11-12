// Given an array Arr of N elements which is first increasing and then may be decreasing, find the maximum element in the array.
// Note: If the array is increasing then just print then last element will be the maximum value.

// Example 1:

// Input: 
// N = 9
// Arr[] = {1,15,25,45,42,21,17,12,11}
// Output: 45
// Explanation: Maximum element is 45.
#include <iostream>
using namespace std;

int maxValue(int arr[], int n, int low, int high){
    int mid = low + (high - low) / 2;
    int maxNum = arr[mid];
    if((maxNum > arr[mid+1]) && (maxNum > arr[mid-1])){
        
        return maxNum;
    }
    else if((maxNum > arr[mid+1]) && (maxNum < arr[mid-1])){
        return maxValue(arr, n, low, mid - 1);
    } else {
        return maxValue(arr, n, mid+1, high);
    }
}

int main(){
    int arr[] = {1, 15, 25, 45, 42, 21, 17, 12, 11};
    int n = 9;
    int val = maxValue(arr, n, 0, n-1);
    printf("val -> %d\n", val);
    return 0;
}