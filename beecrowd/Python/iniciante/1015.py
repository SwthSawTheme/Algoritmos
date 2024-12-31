import math

def distancia(x1:float,x2:float,y1:float,y2:float):
    dist = math.sqrt(((x2 - x1)**2) + ((y2 - y1)**2))
    return print(f"{dist:.4f}")

x1,y1 = map(float, input().split())
x2,y2 = map(float, input().split())

resultado = distancia(x1,x2,y1,y2)