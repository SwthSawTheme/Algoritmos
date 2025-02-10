def calcular_reajuste(salario):
    if salario <= 400.00:
        percentual = 15
    elif salario <= 800.00:
        percentual = 12
    elif salario <= 1200.00:
        percentual = 10
    elif salario <= 2000.00:
        percentual = 7
    else:
        percentual = 4
    
    reajuste = salario * (percentual / 100)
    novo_salario = salario + reajuste
    
    return novo_salario, reajuste, percentual

# Entrada do salário
salario = float(input())

# Cálculo do reajuste
novo_salario, reajuste, percentual = calcular_reajuste(salario)

# Saída formatada
print(f"Novo salario: {novo_salario:.2f}")
print(f"Reajuste ganho: {reajuste:.2f}")
print(f"Em percentual: {percentual} %")