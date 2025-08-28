
# l >= sqrt(a/(p/100))


def raiz(a):
    return a ** (1/2)

def main():
    while True:
        entrada = input().strip()
        if entrada == "0":
            break

        a,b,c = map(int, entrada.split())

        valor = raiz((a*b)/(c/100))

        print(int(valor))
        
if __name__ == "__main__":
    main()