#include <iostream>
#include <iomanip>

int main(){
    double pi = 3.14159;
    double raio, volume;

    std::cin >> raio;

    volume = (4.0 / 3.0) * pi * (raio * raio * raio);

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "VOLUME = " << volume << std::endl;
    return 0;
}