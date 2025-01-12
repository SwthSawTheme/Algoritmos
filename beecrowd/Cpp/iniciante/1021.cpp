#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double valor;
    std::cin >> valor;
 
    int n = std::round(valor * 100);

    int notas[6] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[6] = {100, 50, 25, 10, 5, 1};

    std::cout << "NOTAS:" << std::endl;
    for (int i = 0; i < 6; i++) {
        int quantidade = n / notas[i];
        std::cout << quantidade << " nota(s) de R$ " << std::fixed << std::setprecision(2) << notas[i] / 100.0 << std::endl;
        n %= notas[i];
    }

    std::cout << "MOEDAS:" << std::endl;
    for (int j = 0; j < 6; j++) {
        int quantidade = n / moedas[j];
        std::cout << quantidade << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << moedas[j] / 100.0 << std::endl;
        n %= moedas[j];
    }
    return 0;
}