#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double salario;

    std::cout << std::fixed << std::setprecision(2);
    std::cin >> salario;

    if (salario <= 400.00){
        double ajuste1 = 1.15;
        std::cout << "Novo salario: " << salario * ajuste1 << std::endl;
        std::cout << "Reajuste ganho: " << (salario * ajuste1) - salario << std::endl;
        std::cout << "Em percentual: " << static_cast<int>(round((ajuste1 * 100) - 100)) << " %" << std::endl;

    } else if (salario <= 800.00){
        double ajuste2 = 1.12;
        std::cout << "Novo salario: " << salario * ajuste2 << std::endl;
        std::cout << "Reajuste ganho: " << (salario * ajuste2) - salario << std::endl;
        std::cout << "Em percentual: " << static_cast<int>(round((ajuste2 * 100) - 100)) << " %" << std::endl;

    } else if (salario <= 1200.00) {
        double ajuste3 = 1.10;
        std::cout << "Novo salario: " << salario * ajuste3 << std::endl;
        std::cout << "Reajuste ganho: " << (salario * ajuste3) - salario << std::endl;
        std::cout << "Em percentual: " << static_cast<int>(round((ajuste3 * 100) - 100)) << " %" << std::endl;

    } else if (salario <= 2000.00) {
        double ajuste4 = 1.07;
        std::cout << "Novo salario: " << salario * ajuste4 << std::endl;
        std::cout << "Reajuste ganho: " << (salario * ajuste4) - salario << std::endl;
        std::cout << "Em percentual: " << static_cast<int>(round((ajuste4 * 100) - 100)) << " %" << std::endl;

    } else {
        double ajuste5 = 1.04;
        std::cout << "Novo salario: " << salario * ajuste5 << std::endl;
        std::cout << "Reajuste ganho: " << (salario * ajuste5) - salario << std::endl;
        std::cout << "Em percentual: " << static_cast<int>(round((ajuste5 * 100) - 100)) << " %" << std::endl;
    }
    return 0;
}