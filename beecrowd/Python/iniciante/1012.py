# Área
a, b, c = input().split()

a = float(a)
b = float(b)
c = float(c)

pi = 3.14159

# formula A = b*h/2
triangulo = (a * c) / 2
# formula (A = π r²)
cirulo = pi * (c**2)
# formula A=(a+b)h/2
trapezio = (a+b) * (c/2)
# formula A = b. h
quadrado = b ** 2
# formula A=b⋅h
retangulo = a * b

print(f"TRIANGULO: {triangulo:.3f}\nCIRCULO: {cirulo:.3f}\nTRAPEZIO: {trapezio:.3f}\nQUADRADO: {quadrado:.3f}\nRETANGULO: {retangulo:.3f}")