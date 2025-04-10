def tempoDeJogo(hora_inicial,minuto_inicial,hora_final,minuto_final):
    inicio = hora_inicial * 60 + minuto_inicial
    fim = hora_final * 60 + minuto_final

    duracao = fim - inicio
    if duracao <= 0:
        duracao += 24 * 60

    horas = duracao // 60
    minutos = duracao % 60
    print(f"O JOGO DUROU {horas} HORA(S) E {minutos} MINUTO(S)")

if __name__ == "__main__":
    n1,n2,n3,n4 = map(int,input().split())
    tempoDeJogo(n1,n2,n3,n4)