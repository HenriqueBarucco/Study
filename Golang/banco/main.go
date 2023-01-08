package main

import "fmt"

type ContaCorrente struct {
	titular       string
	numeroAgencia int
	numeroConta   int
	saldo         float64
}

func main() {
	contaHenrique := ContaCorrente{titular: "Henrique", numeroAgencia: 583, numeroConta: 123456, saldo: 10.50}

	fmt.Println(contaHenrique)
}
