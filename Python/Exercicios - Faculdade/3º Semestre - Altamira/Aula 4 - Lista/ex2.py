number = []

i = int()

for i in range(0, 10):
    valor = int(input("Escolha um numero: "))
    number.append(valor)

print("Soma dos numeros: ", sum(number))
print("Média dos numeros: ", sum(number)/10)
print("O maior numero: ", max(number))
print("O menor numero: ", min(number))