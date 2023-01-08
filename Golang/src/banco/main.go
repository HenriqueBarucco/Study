package main

import (
	"banco/clientes"
	"banco/contas"
	"fmt"
)

func PagarBoleto(conta verificarConta, valorDoBoleto float64) {
	conta.Sacar(valorDoBoleto)
}

type verificarConta interface {
	Sacar(valor float64) string
}

func main() {
	clienteHenrique := clientes.Titular{Nome: "Henrique", CPF: "123.123.123.12", Profissao: "Desenvolvedor"}
	contaDoHenrique := contas.ContaCorrente{Titular: clienteHenrique, NumeroAgencia: 123, NumeroConta: 1234}

	contaDoHenrique.Depositar(1000)
	PagarBoleto(&contaDoHenrique, 60)

	contaDoHenrique.Depositar(1000)
	fmt.Println(contaDoHenrique.ObterSaldo())
}
