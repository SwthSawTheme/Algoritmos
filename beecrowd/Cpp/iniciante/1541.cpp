#include <iostream>
#include <cmath>


int main(){
    double a,b,c;

    std::cin >> a >> b >> c;

    if (a > 0 && a <= 1000 && b > 0 && b <= 1000 &&
    c > 0 && c <= 1000){
        int form = sqrt(a*b/(c/100));

        std::cout << form << std::endl;
    }

    return 0;
}