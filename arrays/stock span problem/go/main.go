// The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days.
// The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
// For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

// Example 1:

// Input:
// N = 7, price[] = [100 80 60 70 60 75 85]
// Output:
// 1 1 1 2 1 4 6
// Explanation:
// Traversing the given input span for 100 will
// be 1,80 is smaller than 100 so the span is 1 ,
// 60 is smaller than 80 so the span is 1 ,
// 70 is greater than 60 so the span is 2 and so on.
// Hence the output will be 1 1 1 2 1 4 6.
// Example 2:

// Input:
// N = 6, price[] = [10 4 5 90 120 80]
// Output:
// 1 1 2 4 5 1
// Explanation:
// Traversing the given input span for 10 will be 1,
// 4 is smaller than 10 so the span will be 1 ,
// 5 is greater than 4 so the span will be 2 and so on.
// Hence, the output will be 1 1 2 4 5 1.
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {

	var testCases int
	fmt.Fscan(os.Stdin, &testCases)
	for i := 0; i < testCases; i++ {
		var n int
		fmt.Fscan(os.Stdin, &n)

		arr := make([]int, n)
		for j := range arr {
			fmt.Fscan(os.Stdin, &arr[j])
		}
		//	fmt.Println("arr -> ", arr)
		stockSpan(arr, n)
	}
}

func stockSpan(arr []int, n int) {
	dayStack := make([]int, 0)
	span := make([]int, n)
	span[0] = 1
	dayStack = append(dayStack, 0)
	log.Println("dayStack -> ", dayStack)
	log.Println("span -> ", span)
	for i := 1; i < n; i++ {
		log.Println("i -> ", i)
		for len(dayStack) != 0 && arr[dayStack[len(dayStack)-1]] <= arr[i] {
			log.Println("before pop, -> ", dayStack, arr[len(dayStack)])
			dayStack = dayStack[0 : len(dayStack)-1]
			log.Println("after popped out -> ", dayStack)
		}

		if len(dayStack) == 0 {
			span[i] = i + 1
		} else {
			span[i] = i - dayStack[len(dayStack)-1]
		}
		dayStack = append(dayStack, i)
	}
	log.Println("span -> ", span)
}
