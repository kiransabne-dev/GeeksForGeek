// linear search of element in an array
package main

import (
	"fmt"
	"os"
)

func main() {
	var testCases int
	fmt.Fscan(os.Stdin, &testCases)
	for t := 0; t < testCases; t++ {
		var n int
		fmt.Fscan(os.Stdin, &n)
		var element int
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		fmt.Fscan(os.Stdin, &element)

		value := search(arr, n, element)
		fmt.Println("value -> ", value)
	}

}

func search(arr []int, n, element int) int {
	for i := 0; i < n; i++ {
		if arr[i] == element {
			return i
		}
	}
	return -1
}
