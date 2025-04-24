#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    map<int, string> tabela;
    int dd;

    tabela[61] = "Brasilia";
    tabela[71] = "Salvador";
    tabela[11] = "Sao Paulo";
    tabela[21] = "Rio de Janeiro";
    tabela[32] = "Juiz de Fora";
    tabela[19] = "Campinas";
    tabela[27] = "Vitoria";
    tabela[31] = "Belo Horizonte";

    cin >> dd;
    if (tabela.find(dd) != tabela.end()){
        cout << tabela[dd] << endl;
    } else {
        cout << "DDD nao cadastrado" << endl;
    }

    return 0;
}