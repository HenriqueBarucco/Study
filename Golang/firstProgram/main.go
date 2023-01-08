package main

import (
	"fmt"
	"net/http"
	"os"
	"time"
)

const monitoramentos = 5
const delay = 5

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

	fmt.Println("O comando escolhido foi", command)
	fmt.Println("")

	return command
}

func iniciarMonitoramento() {
	fmt.Println("Monitorando...")

	sites := []string{"https://www.alura.com.br/", "https://www.google.com.br/", "https://www.henriquebarucco.com.br/"}

	fmt.Println(sites)

	for i := 0; i < monitoramentos; i++ {
		for i, site := range sites {
			fmt.Println("Testando site", i, ":", site)
			testaSite(site)
		}
		time.Sleep(delay * time.Second)
		fmt.Println("")
	}

	fmt.Println("")
}

func testaSite(site string) {
	resp, _ := http.Get(site)

	if resp.StatusCode == 200 {
		fmt.Println("Site", site, "foi carregado com sucesso.")
	} else {
		fmt.Println("Site:", site, "esta com problemas. Status Code:", resp.StatusCode)
	}
}
