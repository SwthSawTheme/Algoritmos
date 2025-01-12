#include <iostream>

// Função para calcular a potência (suporta expoentes fracionários)
double potencia(double base, double expoente) {
    if (expoente == 0) {
        return 1; // Qualquer número elevado a 0 é 1
    }

    // Para expoentes positivos
    double res = 1.0;

    // Parte inteira do expoente
    int parteInteira = (int)expoente;
    for (int i = 0; i < parteInteira; i++) {
        res *= base;
    }

    // Parte fracionária (aproximação da raiz)
    double parteFracionaria = expoente - parteInteira;
    if (parteFracionaria > 0) {
        double raiz = base; // Começa com a base
        for (int i = 0; i < 10; i++) { // 10 iterações para precisão
            raiz = 0.5 * (raiz + base / raiz); // Método de Newton
        }
        res *= raiz; // Multiplica pelo componente fracionário
    }

    return res;
}

// Função para calcular a raiz quadrada
double raiz_Quadrada(double num) {
    return potencia(num, 0.5);
}

// Função para calcular o módulo (valor absoluto)
double mod(double num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    // Calcula o maior entre a e b
    double maiorAB = (a + b + mod(a - b)) / 2;

    // Calcula o maior entre maiorAB e c
    double maiorC = (maiorAB + c + mod(maiorAB - c)) / 2;

    std::cout << (int)maiorC << " eh o maior" << std::endl;

    return 0;
}
