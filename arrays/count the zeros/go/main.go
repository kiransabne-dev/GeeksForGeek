// Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

// Example 1:

// Input:
// N = 12
// Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 3
// Explanation: There are 3 0's in the given array.
package main

import (
	"log"
)

func main() {
	arr := []int{1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
	n := 12
	count := 0
	for i := n - 1; i > 0; i-- {
		//log.Println(arr[i])
		if arr[i] == 0 {
			count++
		}
	}

	// O(logN) solution
	// if arr[n-1] == 1 {
	// 	log.Println("new count -> ", 0)
	// }

	// if arr[0] == 0 {
	// 	log.Println("new count -> ", n)
	// }

	// low := 0
	// high := n - 1
	// for low < high {
	// 	mid := (low + high) / 2
	// 	if arr[mid] == 0 {
	// 		high = mid
	// 	} else {
	// 		low = mid + 1
	// 	}
	// }
	// log.Println("new count -> ", n-high)

	log.Println("count -> ", count)
}
