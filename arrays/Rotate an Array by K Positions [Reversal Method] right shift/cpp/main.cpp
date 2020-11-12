// mplement the function arrayRotate(int arr[], int n, int k) which takes three arguments

// arr[] - An array of integers
// n      - Size of the array
// k      - Number of times the array needs to be rotated 

// Your task is simple, you just need to rotate the given array k times.

// Note: You should use in-place reversal logic to implement this task.
// Example

// input: 
//  arr[] = {1,2,3,4,5}
// n = 5
// k = 1

// output: 
//  {5,1,2,3,4}

// input: 
//  arr[] = {1,2,3,4,5}
// n = 5
// k = 2

// output: 
//  {4,5,1,2,3}

#include <iostream>

using namespace std;

// arr[] = {1,2,3,4,5}
// n = 5
// k = 3

void reverseArrayKTime(int arr[], int n, int k){
  int temp[k];
  for(int i = 0; i < k; i++){
    printf(" first %d %d\n", i, n-k+i);
    temp[i] = arr[n-k+i];
  }

  for(int i = n-1; i >= k; i--){
  printf("second %d %d\n", i, i-k);

    arr[i] = arr[i-k];
  }

  for(int i = 0; i < k; i++){
    arr[i] = temp[i];
  }
  
  for(int i = 0; i < n; i++){
     printf("%d\n", arr[i]);
  }

}
void rotateArrayBydPlaces(int arr[], int n, int k){
  int temp[k];
  for(int i = 0; i < k; i++){
    temp[i] = arr[i];
  }

  for(int i = k; i < n; i++){
    arr[i - k] = arr[i];
  }

  for(int i = 0; i < k; i++){
    arr[n-k+i] = temp[i];
  }

  for(int i = 0; i< n; i++){
    printf("%d\n", arr[i]);
  }
}

int main(){
  int arr[] = {1,2,3,4,5};
  // 3, 4, 5, 1, 2
  //4,5,1,2,3
  int n = 5;
  int k = 3;
  // rotateArrayBydPlaces(arr, n, k);
  reverseArrayKTime(arr, n, k);
  // int count = noOfSubsets(arr, n);
  // printf("count %d\n", count);
  return 0;
}