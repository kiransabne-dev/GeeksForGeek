// Example Input
// 3
// 3
// 2 2 2
// 3
// 1 2 3
// 4
// 2 3 4 5
// Example Output
// 4
// 3
// 7
// Explanation
// Example case 1: Place the first two dishes on the burners, wait for two minutes, remove both dishes and prepare the last one on one burner.

// Example case 2: Place the first and third dish on the burners. When the first dish is prepared, remove it and put the second dish on the same burner.

// Example case 3: Place the third and fourth dish on the burners. When the third dish is prepared, remove it and put the second dish on the same burner. Similarly, replace the fourth dish (when it is prepared) by the first dish on the other burner.

package main

import (
	"fmt"
	"os"
	"sort"
)

func main() {
	var testCases int
	fmt.Fscan(os.Stdin, &testCases)
	for t := 0; t < testCases; t++ {
		var n int
		fmt.Fscan(os.Stdin, &n)
		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(os.Stdin, &arr[i])
		}
		sort.Ints(arr)
		//	log.Println("arr -> ", arr)

		first := 0
		second := 0
		for i := n - 1; i >= 0; i-- {
			//		log.Println(arr[i])
			if first == 0 {
				first += arr[i]
			} else if second == 0 {
				second += arr[i]
			} else {
				if first >= second {
					second += arr[i]
				} else {
					first += arr[i]
				}
			}
			//first, second = first+arr[i], second+arr[i-1]
		}
		//	log.Println(first, second)
		if first == second {
			fmt.Println(first)
		} else {
			fmt.Println(max(&first, &second))
		}
	}

}

func max(a, b *int) int {
	if *a > *b {
		return *a
	} else {
		return *b
	}
}

func min(a, b *int) int {
	if *a < *b {
		return *a
	} else {
		return *b
	}
}
