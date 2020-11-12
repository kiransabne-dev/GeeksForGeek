// Given an array of distinct positive numbers, the task is to calculate the minimum number of subsets (or subsequences) from the array such that each subset contains consecutive numbers.

// Expected Time Complexity: O(N. log(N))
// Expected Auxiliary Space: O(1)

#include <iostream>
#include <algorithm>
using namespace std;

// Input
// 2
// 10
// 100 56 5 6 102 58 101 57 7 103 
// 3
// 10 100 105

// Output
// 3
// 3

// Explanation
// Test Case 1 -
// {5, 6, 7}, { 56, 57, 58}, {100, 101, 102, 103} are 3 subset in which numbers are consecutive.

// Test Case 2 -
// {10}, {100} and {105} are 3 subset in which numbers are consecutive.

int noOfSubsets(int arr[], int n){
  sort(arr, arr+n);
  int count = 0;
  for(int i = 0; i < n; i++){
    if(arr[i+1] - arr[i] != 1){
      count++;
    }
  }
  for(int i = 0; i < n; i++){
    printf("%d\n", arr[i]);
  }
  return count;
}

int main(){
  int arr[] = {10, 100, 105};
  int n = 3;
  int count = noOfSubsets(arr, n);
  printf("count %d\n", count);
  return 0;
}