#include <iostream>

int main(){
    
    int n;

    std::cin >> n;

    int horas = n / 3600;
    n %= 3600;
    int minutos = n / 60;
    n %= 60;
    int segundos = n;

    std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
}