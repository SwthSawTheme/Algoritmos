#include <iostream>
#include <iomanip>

int main(){
    int peca1, numero1, peca2, numero2;
    double valor1, valor2, total;

    std::cin >> peca1 >> numero1 >> valor1;
    std::cin >> peca2 >> numero2 >> valor2;
    
    total = (numero1 * valor1) + (numero2 * valor2);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "VALOR A PAGAR: R$ " << total << std::endl;
    return 0;
}