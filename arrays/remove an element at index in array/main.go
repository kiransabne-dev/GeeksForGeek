// remove an element at index given in an array
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
		var n, index int
		fmt.Fscan(os.Stdin, &n)
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		fmt.Fscan(os.Stdin, &index)

		remove(arr, n, index)
		log.Println("arr -> ", arr)
	}
}

func remove(arr []int, n, index int) {
	for i := index; i < n-1; i++ {
		arr[i] = arr[i+1]
	}
	arr[n-1] = 0

}
