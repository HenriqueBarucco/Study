package main

import (
	"fmt"
	"reflect"
)

func main() {
	name := "Henrique"
	age := 19
	version := 1.1

	fmt.Println("Olá,", name, "sua idade é", age)
	fmt.Println("Este programa está na versão", version)

	fmt.Println("O tipo da variavel nome é", reflect.TypeOf(name))
}
