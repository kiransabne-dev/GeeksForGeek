// reverse individual words of the string
// input:
//  Programming is an Art

// output:
//  gnimmargorP si na trA

package main

import (
	"fmt"
)

func main() {
	inputStr := "Programming is an Art"
	stack := make([]string, 0)
	for i := 0; i < len(inputStr); i++ {
		//fmt.Println(string(inputStr[i]))
		if string(inputStr[i]) != " " {
			stack = append(stack, string(inputStr[i]))
		} else {
			for len(stack) != 0 {
				fmt.Println(stack[len(stack)-1])
				stack = stack[0 : len(stack)-1]
			}
			fmt.Println(" ")
		}
	}
	// for last word which was inserted in stack as per loop but it dont have space at end
	for len(stack) != 0 {
		fmt.Println(stack[len(stack)-1])
		stack = stack[0 : len(stack)-1]
	}
	fmt.Println("stack -> ", stack)
}
