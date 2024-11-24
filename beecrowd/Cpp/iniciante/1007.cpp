#include <iostream>

// fórmula: DIFERENCA = (A * B - C * D)
int main(){
    int a, b, c, d, dif;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    dif = (a * b) - (c * d);

    std::cout << "DIFERENCA = " << dif << std::endl;
    return 0;
}