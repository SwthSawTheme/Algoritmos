#include <iostream>

using namespace std;

int main(){
    int contador = 0;
    double variable;

    for (int i=0;i < 6; i++){
        cin >> variable;
        if (variable > 0){
            contador ++;
        }
    }

    cout << contador << " valores positivos" << endl;

    return 0;
}