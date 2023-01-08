package main

import (
	"fmt"
	"net/http"
	"os"
)

func main() {

	exibeIntroducao()
	for {
		exibeMenu()
		command := leComando()

		switch command {
		case 1:
			iniciarMonitoramento()
		case 2:
			fmt.Println("Exibindo Logs...")
		case 0:
			fmt.Println("Saindo do programa")
			os.Exit(0)
		default:
			fmt.Println("Não conheço este comando.")
			os.Exit(-1)
		}
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

func iniciarMonitoramento() {
	fmt.Println("Monitorando...")

	site := "https://www.alura.com.br/"
	resp, _ := http.Get(site)

	if resp.StatusCode == 200 {
		fmt.Println("Site", site, "foi carregado com sucesso.")
	} else {
		fmt.Println("Site:", site, "esta com problemas. Status Code:", resp.StatusCode)
	}
}
