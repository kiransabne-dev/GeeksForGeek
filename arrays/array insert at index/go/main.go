// insert an element in array at the k th index.
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
		var n, k, element int
		fmt.Fscan(os.Stdin, &n)
		fmt.Fscan(os.Stdin, &k)
		fmt.Fscan(os.Stdin, &element)
		arr := make([]int, n+1)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		log.Println("arr -> ", arr)
		insertElementAtIndex(arr, n, k, element)
		log.Println("arr -> ", arr)
	}
}

func insertElementAtIndex(arr []int, n, pos, element int) {
	if pos == n-1 {
		arr[pos] = element
	}
	for i := n - 1; i >= pos; i-- {
		arr[i+1] = arr[i]
	}
	arr[pos] = element
}
