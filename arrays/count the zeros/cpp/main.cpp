// Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

// Example 1:

// Input:
// N = 12
// Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 3
// Explanation: There are 3 0's in the given array.
#include <iostream>

using namespace std;

int countZeros(int arr[], int n){
    int count = 0;
    // for(int i = n-1; i > 0; i--){
    //     if(arr[i] == 0){
    //         count++;
    //     }
    // }
    // return count;
    if(arr[n-1] == 1)
    return count;

    if(arr[0] == 0)
    return n;

    int low = 0;
    int high = n-1;
    while (low < high)
    {
        /* code */
        int mid = (low + high) / 2;
        if(arr[mid] == 0){
            high = mid;
        } else {
            low = mid+1;
        }
        
    }
return n - high;
    
}

int main(){
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n = 12;
    int count = countZeros(arr, n);
    printf("count -> %d\n", count);
    return 0;
}