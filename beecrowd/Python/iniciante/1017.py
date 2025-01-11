# O automóvel faz 12 KM/l
# tempo gasto em horas
# velocidade media
# gasto = (velocidade / KM/l) * tempo

def g_combustivel(tempo:int,velocidade:int):
    return (velocidade / 12) * tempo

a = int(input())
b = int(input())

gasto = g_combustivel(a,b)
print(f"{gasto:.3f}")