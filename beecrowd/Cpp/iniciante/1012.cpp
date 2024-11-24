#include <iostream>
#include <iomanip>

int main(){
    double a, b, c;
    double pi = 3.14159;
    double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    // formula A = b*h/2
    TRIANGULO = (a * c) / 2;
    // formula (A = π r²)
    CIRCULO = pi * (c * c);
    // formula A=(a+b)h/2
    TRAPEZIO = ((a + b) * c) / 2;
    // formula A = b. h
    QUADRADO = b * b;
    // formula A=b⋅h
    RETANGULO = a * b;

    std::cout << std::fixed << std::setprecision(3);
    
    std::cout << "TRIANGULO: " << TRIANGULO << std::endl;
    std::cout << "CIRCULO: " << CIRCULO << std::endl;
    std::cout << "TRAPEZIO: " << TRAPEZIO << std::endl;
    std::cout << "QUADRADO: " << QUADRADO << std::endl;
    std::cout << "RETANGULO: " << RETANGULO << std::endl;

    return 0;
}