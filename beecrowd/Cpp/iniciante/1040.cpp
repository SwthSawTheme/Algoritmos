#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n1,n2,n3,n4,n5;
    double p1 = 2, p2 = 3, p3 = 4, p4 = 1;
    
    double media;

    cout << fixed << setprecision(1);
    cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1 * p1) + (n2 * p2) + (n3 * p3) + (n4 * p4)) / (p1+p2+p3+p4);
    if (media >= 7.0){
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
        return 0;
    } else if (media < 5.0){
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
        return 0;
    } else if ( media >= 5.0 && media <= 6.9) {
        cin >> n5;
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        double nova_media = (media + n5) / 2;
        cout << "Nota do exame: " << n5 << endl;
        
        if (nova_media >= 5.0){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << nova_media << endl;
            return 0;
        } else {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << nova_media << endl;
            return 0;
        }

    }

    return 0;
}