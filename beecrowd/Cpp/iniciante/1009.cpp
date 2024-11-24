#include <iostream>
#include <iomanip>

int main(){
    double salario, vendas, total;
    std::string name;

    std::cin >> name;
    std::cin >> salario;
    std::cin >> vendas;

    total = (vendas * 0.15) + salario;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = R$ " << total << std::endl;
    
    return 0;
}