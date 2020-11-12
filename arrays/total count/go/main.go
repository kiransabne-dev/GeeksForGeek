// Given an array Arr of N positive integers and a number K where K is used as a threshold value to divide each element of the array into sum of different numbers. Find the sum of count of the numbers in which array elements are divided.

// Example 1:

// Input:
// N = 4, K = 3
// Arr[] = {5, 8, 10, 13}
// Output: 14
// Explanation: Each number can be expressed as sum
// of different numbers less than or equal to K as
// 5 (3 + 2), 8 (3 + 3 + 2), 10 (3 + 3 + 3 + 1),
// 13 (3 + 3 + 3 + 3 + 1). So, the sum of count
// of each element is (2+3+4+5)=14.

package main

import (
	"fmt"
	"os"
)

func main() {
	var testCases int
	fmt.Fscan(os.Stdin, &testCases)
	for t := 0; t < testCases; t++ {
		var n, k int
		fmt.Fscan(os.Stdin, &n)
		fmt.Fscan(os.Stdin, &k)
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		val := totalCount(arr, n, k)
		fmt.Println("Val -> ", val)
	}
}

func totalCount(arr []int, n, k int) int {
	sum := 0
	for i := 0; i < n; i++ {
		count := 0
		if arr[i]%k == 0 {
			count = arr[i] / k
		} else {
			count = arr[i]/k + 1
		}
		sum = sum + count
	}
	return sum
}
