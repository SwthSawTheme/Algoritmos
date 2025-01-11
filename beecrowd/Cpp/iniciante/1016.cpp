/* 
diferenca_velocidade = 30
tempo_horas = d / diferenca_velocidade
tempo_minutos = tempo_horas * 60
*/
#include <iostream>
using namespace std;

int main(){
    double distancia;
    double dif_velocidade = 30;

    cin >> distancia;

    double tempo_horas = distancia / dif_velocidade;
    double tempo_minutos = tempo_horas * 60;

    cout << tempo_minutos << " minutos" << endl;

    return 0;
}