#include <iostream>

int potencia(int base, int expoente){
    if (expoente == 0){
        std::cout << "1" << std::endl;
    }
    
    for (int i = 1; i <= expoente; i++){
       int res = base * expoente;
       return res;
    } 
    
}

int main(){

    std::cout << potencia(5,5) << std::endl;
    return 0;
}