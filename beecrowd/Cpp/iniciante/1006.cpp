#include <iostream>
#include <iomanip>

// formula media = ((a . p_a) + (b . p_b)) / (p_a + p_b)

int main(){
    double a, b, c, media;
    double p_a, p_b, p_c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    p_a = 2.0;
    p_b = 3.0;
    p_c = 5.0;
    
    media = ((a * p_a) + (b * p_b) + (c * p_c)) / (p_a + p_b + p_c);

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "MEDIA = " << media << std::endl;
    
    return 0;
}