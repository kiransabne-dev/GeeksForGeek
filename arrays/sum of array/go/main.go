package main

import (
	"log"
)

func main() {
	n := 4
	arr := []int{1, 2, 3, 4}
	sum := 0
	for i := 0; i < n; i++ {
		sum += arr[i]
	}
	log.Println("sum -> ", sum)
}

// Given an integer array Arr[] of size N. The task is to find sum of it.

// Example 1:

// Input:
// N = 4
// Arr[] = {1, 2, 3, 4}
// Output: 10
// Explanation: 1 + 2 + 3 + 4 = 10.
