package main

import (
	"banco/contas"
	"fmt"
)

func main() {
	contaDaSilvia := contas.ContaCorrente{titular: "Silvia", saldo: 300}
	contaDoGustavo := contas.ContaCorrente{titular: "Gustavo", saldo: 100}

	status := contaDaSilvia.Transferir(200, &contaDoGustavo)

	fmt.Println(status)

	fmt.Println(contaDaSilvia)
	fmt.Println(contaDoGustavo)
}
