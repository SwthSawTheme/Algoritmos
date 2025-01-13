#include <iostream>

int main(){
    int a,b,c,d;

    std::cin >> a >> b >> c >> d;

    if (b > c && d > a && (c + d) > (a + b) && (c,d) % 2 == 0 && a % 2 == 0){
        std::cout << "Valores aceitos" << std::endl;
    } else {
        std::cout << "Valores nao aceitos" << std::endl;
    }
    return 0;
}