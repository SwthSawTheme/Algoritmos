def calcular_tempo(d):
    diferenca_velocidade = 30

    tempo_horas = d / diferenca_velocidade
    tempo_minutos = tempo_horas * 60
    return int(tempo_minutos)

distancia = int(input())
tempo = calcular_tempo(distancia)
print(f"{tempo} minutos")