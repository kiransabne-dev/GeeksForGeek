// implement the function arrayRotate(int arr[], int n, int k) which takes three arguments

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
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	var testCases int
	fmt.Fscan(os.Stdin, &testCases)
	for t := 0; t < testCases; t++ {
		var n, d int
		fmt.Fscan(os.Stdin, &n)
		fmt.Fscan(os.Stdin, &d)
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		log.Println("input => ", arr)
		rotateArrayByDPlacesReversal(arr, n, d)
		log.Println("output => ", arr)
	}
}

func rotateArrayByDPlacesReversal(arr []int, n, d int) {
	tempArr := make([]int, d)
	for i := 0; i < d; i++ {
		tempArr[i] = arr[n-d+i]
	}

	for i := n - 1; i >= d; i-- {
		arr[i] = arr[i-d]
	}

	for i := 0; i < d; i++ {
		arr[i] = tempArr[i]
	}
}
