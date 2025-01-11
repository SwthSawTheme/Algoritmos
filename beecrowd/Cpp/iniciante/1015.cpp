#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
// Distancia = √((x2 - x1)**2) + ((y2 -y1)**2)


int main() {
    double x1,x2,y1,y2;
    double distancia;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cout << fixed << setprecision(4);

    distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    cout << distancia;
    
    return 0;
}