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

package main

import "log"

func minValueoBalance(arr []int, n int) int {
	val := 0
	//mid := n / 2
	leftSum := 0
	for i := 0; i < n/2; i++ {
		leftSum += arr[i]
		log.Println(arr[i])
	}

	rightSum := 0
	for j := n / 2; j < n; j++ {
		rightSum += arr[j]
		log.Println(arr[j])
	}

	if leftSum > rightSum {
		val = leftSum - rightSum
	} else {
		val = rightSum - leftSum
	}

	return val
}

func main() {

	arr := []int{1, 2, 1, 2, 1, 3}
	n := 6
	val := minValueoBalance(arr, n)
	log.Println("val -> ", val)
}
