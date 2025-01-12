#include <iostream>

int main(){
    int n;
    std::cin >> n;

    std::cout << n << std::endl;

    int notas[7] = {100,50,20,10,5,2,1};

    for (int i=0; i < 7; i++){
        std::cout << n / notas[i] << " nota(s) de R$ " << notas[i] << ",00" << std::endl;
        n %= notas[i];
    }
    return 0;
}