// reverse the array

package main

import (
	"log"
)

func main() {
	arr := []int{30, 7, 6, 5, 10}
	n := 5

	//reverse an arr
	for left, right := 0, n-1; left < right; left, right = left+1, right-1 {
		arr[left], arr[right] = arr[right], arr[left]
	}

	log.Println("arr -> ", arr)
}
