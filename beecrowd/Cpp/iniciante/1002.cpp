#include <iostream>
#include <iomanip>

// Área do Círculo
int main(){

    double pi = 3.14159;
    double raio, area;

    std::cin >> raio;

    area = pi * (raio * raio);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "A=" << area << std::endl;

    return 0;
}