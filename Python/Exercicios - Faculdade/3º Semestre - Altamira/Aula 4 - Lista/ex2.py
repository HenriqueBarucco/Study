number = []
i = int()

maior = int()
menor = int()

while i in range(0, 10):
    valor = int(input("Escolha um numero: "))
    number.append(valor)

    if menor == 0:
        menor = valor

    if valor > maior:
        maior = valor
    if valor < menor:
        menor = valor

    i += 1

soma = int()
for x in number:
    soma += x
    i += 1

media = soma/10

print("Soma dos numeros: ", soma)
print("Média dos numeros: ", media)
print("O maior numero: ", maior)
print("O menor numero: ", menor)