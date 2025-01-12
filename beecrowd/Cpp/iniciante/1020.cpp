#include <iostream>

int main(){
    int n;

    std::cin >> n;

    std::cout << n / 365 << " ano(s)" << std::endl;
    n %= 365;
    std::cout << n / 30 << " mes(es)" << std::endl;
    n %= 30;
    std::cout << n << " dia(s)" << std::endl;

    return 0;
}