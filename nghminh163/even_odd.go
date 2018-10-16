package main

import "fmt"

func main() {
	var a int
	fmt.Scan(&a)
	if a%2 == 0 {
		fmt.Print("The number you entered is even")
	} else {
		fmt.Print("The number you entered is odd")
	}
}
