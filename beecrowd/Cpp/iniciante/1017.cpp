#include <iostream>
#include <iomanip>

int main(){
    double tempo;
    double velocidade;
    double listros;

    std::cin >> tempo;
    std::cin >> velocidade;
    std::cout << std::fixed << std::setprecision(3);

    listros = (tempo * velocidade) / 12;
    std::cout << listros << std::endl;

    return 0;
}