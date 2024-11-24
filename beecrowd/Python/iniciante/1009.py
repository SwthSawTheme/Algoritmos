# Salário com Bônus

nome = str(input())
salario = float(input())
t_vendas = float(input())

bonus = t_vendas * 0.15
novo_salario = bonus + salario
print(f"TOTAL = R$ {novo_salario:.2f}")