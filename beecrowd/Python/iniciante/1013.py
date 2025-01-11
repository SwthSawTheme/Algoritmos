# Raiz quadrada
def sqrt(num:int):
    return int(num ** (1/2))

# Retorna o modulo de um número
def mod(num:int):
    return int(sqrt(num ** 2))

# Formula do Maior

a, b, c = map(int, input().split())

# MaiorAB = (a + b + |a - b|) / 2
maiorAB = (a + b + mod(a - b)) / 2
maiorC = int((maiorAB + c + mod( maiorAB - c)) / 2)

print(f"{maiorC} eh o maior")