#include <iostream>
#include <math.h>
#include <iomanip>

int main(){
    double A,B,C;
    double formula;

    std::cin >> A >> B >> C;
    std::cout << std::fixed << std::setprecision(5);

    formula = (B + sqrt(pow(B,2)-4*A*C)) / (2*A);
    std::cout << formula << std::endl;
    return 0;
}