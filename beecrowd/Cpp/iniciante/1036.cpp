#include <iostream>
#include <math.h>
#include <iomanip>

int main(){
    double A,B,C;
    

    std::cin >> A >> B >> C;

    if (A == 0){
        std::cout << "Impossivel calcular" << std::endl;
        return 0;
    }

    double delta = pow(B,2) - 4*A*C;

    if (delta < 0){
        std::cout << "Impossivel calcular" << std::endl;
        return 0;
    }

    std::cout << std::fixed << std::setprecision(5);
    
    double root1 = (-B + sqrt(delta)) / (2*A);
    double root2 = (-B - sqrt(delta)) / (2*A);

    std::cout << "R1 = " << root1 << std::endl;
    std::cout << "R2 = " << root2 << std::endl;
    return 0;
}