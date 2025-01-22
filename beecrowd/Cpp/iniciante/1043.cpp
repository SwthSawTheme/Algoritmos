#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double a,b,c;

    cin >> a >> b >> c;
    
    cout << fixed << setprecision(1);

    if ( a + b > c && a + c > b && b + c > a) {
        double perimetro = a + b + c;
        cout << "Perimetro = " << perimetro << endl;
    } else {
        double area = ((a + b) * c) / 2;
        cout << "Area = " << area << endl;
    }

    return 0;
}