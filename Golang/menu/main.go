package main

import "fmt"

func main() {

	exibeIntroducao()
	exibeMenu()
	command := leComando()

	switch command {
	case 1:
		fmt.Println("Monitorando...")
	case 2:
		fmt.Println("Exibindo Logs...")
	case 0:
		fmt.Println("Saindo do programa")
	default:
		fmt.Println("Não conheço este comando.")
	}
}

func exibeIntroducao() {
	name := "Henrique"
	version := 1.1
	fmt.Println("Olá,", name)
	fmt.Println("Versão atual do programa:", version)
}

func exibeMenu() {
	fmt.Println("1- Iniciar Monitoramento")
	fmt.Println("2- Exibir Logs")
	fmt.Println("0- Sair do Programa")
}

func leComando() int {
	var command int
	fmt.Scan(&command)

	fmt.Println("O endereço da variavel command é", &command)
	fmt.Println("O comando escolhido foi", command)

	return command
}
