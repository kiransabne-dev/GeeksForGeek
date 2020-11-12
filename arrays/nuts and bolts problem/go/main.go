// Given a set of N nuts of different sizes and N bolts of different sizes. There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.

// Comparison of a nut to another nut or a bolt to another bolt is not allowed. It means nut can only be compared with bolt and bolt can only be compared with nut to see which one is bigger/smaller.
// The elements should follow the following order ! # $ % & * @ ^ ~ .

// Example 1:

// Input:
// N = 5
// nuts[] = {@, %, $, #, ^}
// bolts[] = {%, @, #, $ ^}
// Output:
// # $ % @ ^
// # $ % @ ^
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {

	fmt.Println("hello")
	var testCases int
	fmt.Fscan(os.Stdin, &testCases)
	// var myByte byte = '#'
	// var myRune rune = '♥'

	//fmt.Printf("%c = %d and %c = %U\n", myByte, myByte, myRune, myRune)
	for t := 0; t < testCases; t++ {
		var n int
		fmt.Fscan(os.Stdin, &n)
		nutsArr := make([]string, 5)
		for i := 0; i < 5; i++ {
			fmt.Fscan(os.Stdin, &nutsArr[i])
		}
		fmt.Println(nutsArr)
		boltsArr := make([]string, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &boltsArr[i])
		}

		matchPairs(nutsArr, boltsArr, 0, n-1)
		log.Println("nuts -> ", nutsArr)
		log.Println("bolts -> ", boltsArr)
	}
}

func partition(arr []string, low, high int, pivot string) int {
	i := low
	var temp1, temp2 string
	for j := low; j < high; j++ {
		if arr[j] < pivot {
			temp1 = arr[i]
			arr[i] = arr[j]
			arr[j] = temp1
			i++
		} else if arr[j] == pivot {
			temp1 = arr[j]
			arr[j] = arr[high]
			arr[high] = temp1
			j--
		}
	}
	temp2 = arr[i]
	arr[i] = arr[high]
	arr[high] = temp2
	//	j--
	return i
}

func matchPairs(nuts []string, bolts []string, low, high int) {
	if low < high {
		pivot := partition(nuts, low, high, bolts[high])

		partition(bolts, low, high, nuts[pivot])

		matchPairs(nuts, bolts, low, pivot-1)
		matchPairs(nuts, bolts, pivot+1, high)
	}
}
