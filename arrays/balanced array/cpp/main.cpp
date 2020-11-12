// Given an array of even size N, task is to find minimum value that can be added to an element so that array become balanced. An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.


// Example 1:

// Input:
// N = 4
// arr[] = {1, 5, 3, 2}
// Output: 1
// Explanation: 
// Sum of first 2 elements is 1 + 5  = 6, 
// Sum of last 2 elements is 3 + 2  = 5,
// To make the array balanced you can add 1.

#include <iostream>

using namespace std;

int minValueToBalance(int arr[], int n){
    int val = 0;
    int leftSum = 0;
    for(int i = 0; i < n/2; i++){
        leftSum += arr[i];
    }

    int rightSum = 0;
    for(int i = n/2; i < n; i++){
        rightSum += arr[i];
    }

    if(leftSum > rightSum){
        val = leftSum - rightSum;
    } else {
        val = rightSum - leftSum;
    }

    return val;
}

int main(){
    int arr[] = {1, 2, 1, 2, 1, 3};
    int n = 6;
    int value = minValueToBalance(arr, n);
    printf("valuw -> %d\n", value);
    return 0;
}