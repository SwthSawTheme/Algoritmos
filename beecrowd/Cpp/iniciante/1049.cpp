#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    map<string, map<string, map<string, string>>> animal;
    string n1,n2,n3;

    animal["vertebrado"]["ave"]["carnivoro"] = "aguia";
    animal["vertebrado"]["ave"]["onivoro"] = "pomba";
    animal["vertebrado"]["mamifero"]["onivoro"] = "homem";
    animal["vertebrado"]["mamifero"]["herbivoro"] = "vaca";

    animal["invertebrado"]["inseto"]["hematofago"] = "pulga";
    animal["invertebrado"]["inseto"]["herbivoro"] = "lagarta";
    animal["invertebrado"]["anelideo"]["hematofago"] = "sanguessuga";
    animal["invertebrado"]["anelideo"]["onivoro"] = "minhoca";

    cin >> n1;
    cin >> n2;
    cin >> n3;

    cout << animal[n1][n2][n3] << endl;

    return 0;
}