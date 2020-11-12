// Implement the function void reverse(char str[]) which takes one argument.
// str - Input String
// Your task is to reverse the given string without affecting the special characters.
// input:
//  a*bcd,e$

// output:
//  e*dcb,a$

package main

import (
	"log"
)

func main() {
	str := "a*bcd,e$"
	run := []rune(str)
	min := 0
	max := len(str) - 1
	for min < max {
		if !isLetter(byte(run[min])) {
			min++
		} else if !isLetter(byte(run[max])) {
			max--
		} else {
			temp := run[min]
			run[min] = run[max]
			run[max] = temp
			// fmt.Println("min => ", string(run[min]))
			// fmt.Println("max => ", string(run[max]))
			min++
			max--
		}
	}

	log.Println("str >> ", string(run))
}

func isLetter(ch byte) bool {
	return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
}

// var IsLetter = regexp.MustCompile(`^[a-zA-Z]+$`).MatchString

// func isLetter(s string) bool {
// 	for _, r := range s {
// 		if !unicode.IsLetter(r) {
// 			return false
// 		}
// 	}

// 	return true
// }
