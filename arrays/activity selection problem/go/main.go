// start [1, 3, 2, 0, 5, 8, 11]
// finish [3, 4, 5, 7, 9, 10, 12]
package main

import "log"

func main() {
	start := []int{1, 3, 2, 0, 5, 8, 11}
	finish := []int{3, 4, 5, 7, 9, 10, 12}
	n := 7

	i := 0
	log.Println(i)
	for j := i + 1; j < n; j++ {
		if start[j] >= finish[i] {
			i = j
			log.Println(j)
		}
	}
}
