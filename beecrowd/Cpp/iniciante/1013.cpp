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

int main() {
    std::cout << "Raiz quadrada de 16: " << raiz_Quadrada(16) << std::endl;
    std::cout << "Raiz quadrada de 25: " << raiz_Quadrada(25) << std::endl;
    std::cout << "Raiz quadrada de 2: " << raiz_Quadrada(2) << std::endl;
    return 0;
}
