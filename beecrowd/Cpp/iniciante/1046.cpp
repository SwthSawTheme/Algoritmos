#include <iostream>

int main() {
    int hora_inicial, hora_final;

    std::cin >> hora_inicial >> hora_final;

    if (hora_inicial > hora_final) {
        hora_final += 24;
    }
    
    if (hora_final == hora_inicial) {
        std::cout << "O JOGO DUROU 24 HORA(S)" << std::endl;
    } else {
        std::cout << "O JOGO DUROU " << hora_final - hora_inicial << " HORA(S)" << std::endl;
    }
    return 0;
}