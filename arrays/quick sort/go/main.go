// golang impleentation of  quick sort

package main

import "log"

func swap(a, b *int) {
	t := *a
	*a = *b
	*b = t
}

func main() {
	arr := []int{10, 7, 8, 9, 1, 5}
	n := 6
	quicksort(arr, n, 0, n-1)
	log.Println("arr => ", arr)
}

func quicksort(arr []int, n, low, high int) {
	if low < high {
		pi := partition(arr, n, low, high)

		quicksort(arr, n, low, pi-1)
		quicksort(arr, n, pi+1, high)
	}
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
	swap(&arr[i+1], &arr[high])
	return i + 1
}
