// Given a sorted array having 10 elements which contains 6 different numbers in which only 1 number is repeated five times. Your task is to find the duplicate number using two comparisons only.

// Examples:

// Input: A[] = {1, 1, 1, 1, 1, 5, 7, 10, 20, 30}
// Output: 1

// Input: A[] = {1, 2, 3, 3, 3, 3, 3, 5, 9, 10}
// Output: 3

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
		arr := make([]int, 10)
		for i := 0; i < 10; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		//log.Println("arr -> ", arr)
		val := findDuplicate(arr)
		log.Println("val -> ", val)
	}
}

func findDuplicate(arr []int) int {
	if arr[3] == arr[4] {
		return arr[3]
	} else if arr[4] == arr[5] {
		return arr[4]
	} else {
		return arr[5]
	}
}
