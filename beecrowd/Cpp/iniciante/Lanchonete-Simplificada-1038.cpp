#include <iostream>
using namespace std;

int main(){
    int codigo, qtd;
    double total = 0;

    string menu[5] = {"Cachorro Quente", "X-Salada", "X-Bacon", "Torrada simples", "Refrigerante"};

    for (int i=0; i < 5; i++){
        cout << i+1 << " - " << menu[i] << endl;
    }
    cin >> codigo;

    switch (codigo){

    case 1: {
        double ch_quente = 4.00;
        cout << "Cachoro Quente!" << endl;
        cout << "Digite a quantidade: ";
        cin >> qtd;
        
        if (qtd < 0){
            cout << "Insira uma quantidade para comprar!";
        } else {
            total = qtd * ch_quente;
            cout << "Quantidade a pagar: R$" << total << ".00" << endl;
        }
        break;
    }
    case 2: {
        double salada = 4.50;
        cout << "X-Salada" << endl;
        cout << "Digite a quantidade: ";
        cin >> qtd;
        
        if (qtd < 0){
            cout << "Insira uma quantidade para comprar!";
        } else {
            total = qtd * salada;
            cout << "Quantidade a pagar: R$" << total << ".00" << endl;
        }
        break;
    }
    case 3: {
        double bacon = 5.00;
        cout << "X-Bacon" << endl;
        cout << "Digite a quantidade: ";
        cin >> qtd;
        
        if (qtd < 0){
            cout << "Insira uma quantidade para comprar!";
        } else {
            total = qtd * bacon;
            cout << "Quantidade a pagar: R$" << total << ".00" << endl;
        }
        break;
    }
    case 4: {
        double torrada = 2.00;
        cout << "X-Bacon" << endl;
        cout << "Digite a quantidade: ";
        cin >> qtd;
        
        if (qtd < 0){
            cout << "Insira uma quantidade para comprar!";
        } else {
            total = qtd * torrada;
            cout << "Quantidade a pagar: R$" << total << ".00" << endl;
        }
        break;
    }
    case 5: {
        double refrigerante = 1.50;
        cout << "X-Bacon" << endl;
        cout << "Digite a quantidade: ";
        cin >> qtd;
        
        if (qtd < 0){
            cout << "Insira uma quantidade para comprar!";
        } else {
            total = qtd * refrigerante;
            cout << "Quantidade a pagar: R$" << total << ".00" << endl;
        }
        break;
    }
    }
    return 0;
}