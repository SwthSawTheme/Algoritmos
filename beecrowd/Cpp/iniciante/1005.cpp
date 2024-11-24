#include <iostream>
#include <iomanip>

// formula media = ((a . p_a) + (b . p_b)) / (p_a + p_b)

int main(){
    double a, b, p_a, p_b, media;
    
    std::cin >> a;
    std::cin >> b;

    p_a = 3.5;
    p_b = 7.5;

    media = ((a * p_a) + (b * p_b)) / (p_a + p_b);

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << media << std::endl;

    return 0;
}