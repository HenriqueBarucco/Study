programa {
	funcao inicio() {
	    inteiro idade
	    real temp
	    cadeia nome
	    
		escreva("Qual o nome do paciente? ")
		leia(nome)
		
		escreva("Qual a idade do paciente? ")
		leia(idade)
		
		escreva("Qual a temperatura atual do paciente? ")
		leia(temp)
		
		se(temp >= 38){
		    escreva("O paciente " + nome + " com idade de " + idade + " est� com " + temp + "�C de temperatura! Paciente com FEBRE!")
		}
		senao{
		    escreva("O paciente " + nome + " com a idade de " + idade + " anos, est� com " + temp + "�C de temperatura! Paciente sem FEBRE!")
		}
	}
}
