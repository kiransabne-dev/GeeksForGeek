// Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

// Example 1:

// Input:
// N = 7, X = 2
// Arr[] = {1, 1, 2, 2, 2, 2, 3}
// Output: 4
// Explanation: 2 occurs 4 times in the
// given array.
// Example 2:

// Input:
// N = 7, X = 4
// Arr[] = {1, 1, 2, 2, 2, 2, 3}
// Output: 0
// Explanation: 4 is not present in the
// given array.

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
		var n, x int
		fmt.Fscan(os.Stdin, &n)
		fmt.Fscan(os.Stdin, &x)
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		//log.Println("arr -> ", arr)
		val := count(arr, n, x, 0, n-1)
		log.Println("count -> ", val)
	}
}

func count(arr []int, n, x, low, high int) int {
	//log.Println("high -> ", high, " annd low -> ", low)
	if high >= low {
		mid := low + (high-low)/2
		//log.Println("mid -> ", mid)
		if arr[mid] == x {
			//log.Println("found ", x, " at index ", mid)
			start := mid
			end := mid
			for arr[start] == x || arr[end] == x {
				if arr[start] == x {
					start--
				}
				if arr[end] == x {
					end++
				}
				//log.Println("start -> ", start, " end -> ", end)

			}

			return (end - 1) - (start + 1) + 1
		} else if arr[mid] > x {

			return count(arr, n, x, low, mid-1)
		} else if arr[mid] < x {

			return count(arr, n, x, mid+1, high)
		}
	}
	return 0

}
