#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int codigo, qtd;
    double total = 0;
    cin >> codigo >> qtd;

    cout << fixed << setprecision(2);

    switch (codigo){
        case 1: {
            double ch_quente = 4.00;
            total = qtd * ch_quente;
            cout << "Total: R$ " << total << endl;
        } break;
        
        case 2: {
            double salada = 4.50;
            total = qtd * salada;
            cout << "Total: R$ " << total << endl;
        } break;
        case 3: {
            double bacon = 5.00;
            total = qtd * bacon;
            cout << "Total: R$ " << total << endl;
        } break;
        case 4: {
            double torrada = 2.00;
            total = qtd * torrada;
            cout << "Total: R$ " << total << endl;
        } break;
        case 5: {
            double refri = 1.50;
            total = qtd * refri;
            cout << "Total: R$ " << total << endl;
        } break;
    }

    return 0;
}