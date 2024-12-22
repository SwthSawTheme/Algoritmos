#include <iostream>
#include <iomanip>

int main(){
    int x;
    double y;
    double z;

    std::cin >> x;
    std::cin >> y;

    z = x / y;
    std::cout << std::fixed << std::setprecision(3);
    std::cout << z << "km/l" << std::endl;

    return 0;
}