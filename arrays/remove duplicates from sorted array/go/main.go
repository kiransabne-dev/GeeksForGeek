// Implement the function rmDuplicates(int arr[], int n) which takes two arguments

// arr[] - Sorted array
// n      - Size of the array

// Your task is to remove the duplicates elements from the given sorted array and return the new length.

// Note: You should write an in-place algorithm to implement this task.
// input:
//  arr[] = {1,1,1,3,3,5,5}
// n = 7

// output:
//  3

//  input:
//  arr[] = {10,20,30,40,50}
// n = 5

// output:
//  5

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
		var n int
		fmt.Fscan(os.Stdin, &n)
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}

		values := rmDuplicates(arr, n)
		log.Println("values -> ", values)

	}
}

func rmDuplicates(arr []int, n int) int {
	count := 1
	for i := 0; i < n-1; i++ {
		if arr[i] != arr[i+1] {
			count++
		}
	}
	return count
}
