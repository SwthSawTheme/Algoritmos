
vertebrado = {
    "ave": {
        "carnivoro": "aguia",
        "onivoro": "pomba"
    },

    "mamifero": {
        "onivoro": "homem",
        "herbivoro": "vaca"
    }
}

invertebrado = {
    "inseto": {
        "hematofago": "pulga",
        "herbivoro": "lagarta"
    },
    "anelideo": {
        "hematofago": "sanguessuga",
        "onivoro": "minhoca"
    }
}

def animal(input1: str,input2:str,input3:str):
    if input1 == "vertebrado":
        print(vertebrado[f"{input2}"][f"{input3}"])
    elif input1 == "invertebrado":
        print(invertebrado[f"{input2}"][f"{input3}"])
    else:
        print("Entrada invalida")

if __name__ == "__main__":
    n1 = str(input())
    n2 = str(input())
    n3 = str(input())
    animal(n1,n2,n3)
    
    