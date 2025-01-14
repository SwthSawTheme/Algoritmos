#include <iostream>

int main(){
    double x;

    std::cin >> x;

    if ( x >= 0 && x <= 25){
        std::cout << "Intervalo [0,25]" << std::endl;

    } else if (x > 25 && x <= 50) {
        std::cout << "Intervalo (25,50]" << std::endl;

    } else if (x > 50 && x <=75) {
        std::cout << "Intervalo (50,75]" << std::endl;

    } else if (x > 75 && x <= 100) {
        std::cout << "Intervalo (75,100]" << std::endl;

    } else {
        std::cout << "Fora de intervalo" << std::endl;
        return 0;
    }
    return 0;
}