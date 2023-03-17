sal = float(input("Insire o valor do salário: "))
tempServ = int(input("Insira o tempo de serviço em anos: "))

novoSal = float()

if tempServ > 5:
    novoSal = sal * 1.30
elif tempServ == 5:
    novoSal = sal * 1.20
else:
    novoSal = sal * 1.10

print(f"Novo salário: {novoSal}")