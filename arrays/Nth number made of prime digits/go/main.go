// Given a number 'N'. The task is to find the Nth number whose each digit is a prime number i.e 2, 3, 5, 7. In other words, you have to find the nth number of this sequence: 2, 3, 5, 7, 22, 23,.. and so on.

// Input:
// The first line contains a single integer T i.e. the number of test cases. The first and only line of each test case consists of an integer N.

// Output:
// In one line print the nth number of the given sequence made of prime digits.

// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 100

// Examples:
// Input:
// 2
// 10
// 21
// Output:
// 33
// 222

// Explanation:
// Testcase 1: 10th number in the sequence of numbers whose each digit is prime is 33.
// Testcase 2: 21st number in the sequence of numbers whose each digit is prime is 222.

package main

import (
	"fmt"
	"log"
	s "strings"
)

func main() {
	remainder := 0
	num := make([]string, 0)
	log.Println(len(num))
	number := 10
	for number >= 1 {
		remainder = number % 4
		log.Println("remainder -> ", remainder)
		switch remainder {
		case 1:
			num = append(num, "2")
			break

		case 2:
			num = append(num, "3")
			break

		case 3:
			num = append(num, "5")
			break

		case 0:
			num = append(num, "7")
			break
		}

		if number%4 == 0 {
			number--
		}
		number = number / 4
		log.Println("number -> ", number)
	}
	for left, right := 0, len(num)-1; left < right; left, right = left+1, right-1 {
		num[left], num[right] = num[right], num[left]
	}
	//log.Println("num -> ", num)
	fmt.Println(s.Join(num, ""))
}
