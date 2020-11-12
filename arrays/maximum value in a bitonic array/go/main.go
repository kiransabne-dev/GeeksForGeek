// Given an array Arr of N elements which is first increasing and then may be decreasing, find the maximum element in the array.
// Note: If the array is increasing then just print then last element will be the maximum value.

// Example 1:

// Input:
// N = 9
// Arr[] = {1,15,25,45,42,21,17,12,11}
// Output: 45
// Explanation: Maximum element is 45.

package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	var testXases int
	fmt.Fscan(os.Stdin, &testXases)
	for t := 0; t < testXases; t-- {
		var n int
		fmt.Fscan(os.Stdin, &n)
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		//	log.Println("arr -> ", arr)
		val := maxValue(arr, n, 0, n-1)
		log.Println("val -> ", val)
	}
}

func maxValue(arr []int, n, low, high int) int {
	//log.Println("arr -> ", arr)
	mid := low + (high-low)/2
	log.Println("arr -> ", arr, mid, low, high)
	max := arr[mid]
	log.Println(mid, max)
	if max > arr[mid+1] && max > arr[mid-1] {
		return max
	} else if max > arr[mid+1] && max < arr[mid-1] {
		return maxValue(arr, n, low, mid-1)
	} else {
		return maxValue(arr, n, mid+1, high)
	}

}
