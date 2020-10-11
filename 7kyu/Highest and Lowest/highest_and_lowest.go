package main

import (
	"fmt"
	"sort"
	"strconv"
	"strings"
)

func stringsToInts(strs []string) []int {
	ints := []int{}
	for _, elem := range strs {
		if i, err := strconv.Atoi(elem); err == nil {
			ints = append(ints, i)
		}
	}
	return ints
}

func HighAndLow(in string) string {
	strs := strings.Split(in, " ")
	ints := stringsToInts(strs)
	sort.Ints(ints)
	return fmt.Sprintf("%d %d", ints[len(ints)-1], ints[0])
}

func main() {
	a := "8 3 -5 42 -1 0 0 -9 4 7 4 -4"
	fmt.Println(HighAndLow(a))
}
