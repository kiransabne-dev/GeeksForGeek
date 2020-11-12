package main

import (
	"fmt"
	"sort"
)

func main() {
	fmt.Println("Hello World")
	arr := []int{34, 8, 10, 3, 2, 80, 30, 33, 1}
	n := 9

	list := make(map[int][]int)
	for i := 0; i < n; i++ {
		list[arr[i]] = append(list[arr[i]], i)
	}

	fmt.Println(list[arr[0]], list[arr[1]], list[arr[2]], list[arr[3]], list[arr[4]], list[arr[5]], list[arr[6]], list[arr[7]], list[arr[8]])
	sort.Ints(arr)

	maxDiff := 0
	temp := n
	for i := 0; i < n; i++ {
		if temp > list[arr[i]][0] {
			temp = list[arr[i]][0]
		}
		val := list[arr[i]][len(list[arr[i]])-1] - temp
		if maxDiff > val {
			maxDiff = maxDiff
		} else {
			maxDiff = val
		}
	}
	fmt.Println("maxDiff", maxDiff)
}
