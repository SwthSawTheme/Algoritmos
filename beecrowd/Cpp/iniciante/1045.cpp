#include <iostream>
#include <algorithm> // for sort()

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    // Sort the sides in descending order
    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);

    // Check if the sides form a triangle
    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if ((a * a) == (b * b) + (c * c)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if ((a * a) > (b * b) + (c * c)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if ((a * a) < (b * b) + (c * c)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}
