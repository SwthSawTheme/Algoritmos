#include <iostream>
#include <iomanip>

int main(){
    int num, horas;
    double valor_hora,valor_total;

    std::cin >> num;
    std::cin >> horas;
    std::cin >> valor_hora;

    valor_total = horas * valor_hora;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "NUMBER = " << num << std::endl;
    std::cout << "SALARY = U$ " << valor_total << std::endl;

    return 0;
}