package main

import (
	"bufio"
	"fmt"
	"io"
	"net/http"
	"os"
	"strings"
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

	sites := leSitesDoArquivo()

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
	resp, err := http.Get(site)

	if err != nil {
		fmt.Println("Ocorreu um erro:", err)
	}

	if resp.StatusCode == 200 {
		fmt.Println("Site", site, "foi carregado com sucesso.")
	} else {
		fmt.Println("Site:", site, "esta com problemas. Status Code:", resp.StatusCode)
	}
}

func leSitesDoArquivo() []string {
	var sites []string
	arquivo, err := os.Open("sites.txt")

	if err != nil {
		fmt.Println("Ocorreu um erro:", err)
	}

	leitor := bufio.NewReader(arquivo)

	for {
		linha, err := leitor.ReadString('\n')
		linha = strings.TrimSpace(linha)

		sites = append(sites, linha)

		if err == io.EOF {
			break
		}
	}

	return sites
}
