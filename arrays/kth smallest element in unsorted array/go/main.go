package main

import (
	"fmt"
	"log"
	"os"
)

// wrong
func main() {
	var testCases int
	fmt.Fscan(os.Stdin, &testCases)
	for t := 0; t < testCases; t++ {
		var n, k int
		fmt.Fscan(os.Stdin, &n)
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		log.Println("arr -> ", arr)
		fmt.Fscan(os.Stdin, &k)
		val := kthSmallest(arr, n, 0, n-1, k)
		log.Println("val -> ", val)
	}
}

func kthSmallest(arr []int, n, low, high, k int) int {
	if k > 0 && k <= high-low+1 {
		pos := partition(arr, n, low, high)
		if pos-low == k-1 {
			return arr[pos]
		}
		if pos-low > k-1 {
			return kthSmallest(arr, n, low, pos-1, k)
		}
		return kthSmallest(arr, n, pos+1, high-pos+low-1, k)
	}
	return -1
}

func partition(arr []int, n, low, high int) int {

	pivot := arr[high]
	i := low - 1
	for j := low; j <= high-1; j++ {
		if arr[j] < pivot {
			i++
			swap(&arr[i], &arr[j])
		}
	}
	// last element
	swap(&arr[i+1], &arr[high])
	return i + 1
}

func swap(a, b *int) {
	t := *a
	*a = *b
	*b = t
}
