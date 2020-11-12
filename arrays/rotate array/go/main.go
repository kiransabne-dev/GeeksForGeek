// Given an unsorted array arr[] of size N, rotate it by D elements (clockwise).

// Input:
// The first line of the input contains T denoting the number of testcases. First line of each test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

// Output:
// For each testcase, in a new line, output the rotated array.

// Constraints:
// 1 <= T <= 200
// 1 <= N <= 107
// 1 <= D <= N
// 0 <= arr[i] <= 105

// Example:
// Input:
// 2
// 5 2
// 1 2 3 4 5
// 10 3
// 2 4 6 8 10 12 14 16 18 20

// Output:
// 3 4 5 1 2
// 8 10 12 14 16 18 20 2 4 6

package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	log.Println("hello")
	var testCases int
	fmt.Fscan(os.Stdin, &testCases)
	for t := 0; t < testCases; t++ {
		var n int
		var d int
		fmt.Fscan(os.Stdin, &n)
		fmt.Fscan(os.Stdin, &d)
		arr := make([]int, n)
		for j := range arr {
			fmt.Fscan(os.Stdin, &arr[j])
		}
		rotateArrayByDPlaces(arr, n, d)

	}
}

func rotateArrayByDPlaces(arr []int, n, d int) {
	temp := make([]int, d)
	// copy elems till d in temp array
	for i := 0; i < d; i++ {
		temp[i] = arr[i]
	}

	for i := d; i < n; i++ {
		arr[i-d] = arr[i]
	}

	for i := 0; i < d; i++ {
		arr[n-d+i] = temp[i]
	}
	log.Println("arr -> ", arr)
}
