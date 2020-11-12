// Given a binary array A[] of size N. The task is to arrange the array in increasing order.
// Note: The binary array contains only 0  and 1.

// Example 1:

// Input:
// 5
// 1 0 1 1 0

// Output:
// 0 0 1 1 1

// Explanation:
// After arranging the elements in
// increasing order, elements will be as 0 0 1 1 1.
// Example 2:

// Input:
// 10
// 1 0 1 1 1 1 1 0 0 0

// Output:
// 0 0 0 0 1 1 1 1 1 1

// Explanation:
// After arranging the elements in
// increasing orde, elements will be
// 0 0 0 0 1 1 1 1 1 1.
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
		log.Println("input arr => ", arr)
		binSort(arr, n)
		log.Println("ouptut atrr -> ", arr)
	}
}

func binSort(arr []int, n int) {
	pos := 0
	for i := 0; i < n; i++ {
		if arr[i] != 1 {
			swap(&arr[i], &arr[pos])
			pos++
		}
	}
}

func swap(a, b *int) {
	t := *a
	*a = *b
	*b = t
}
