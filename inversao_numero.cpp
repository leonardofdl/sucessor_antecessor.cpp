// Programa para inverter um numero de tres digitos

#include <iostream>

using namespace std;

int main() {
    int numero;
    int centena, dezena, unidade;
    int invertido;

    cout << "Digite um numero de 3 digitos: ";
    cin >> numero;

    // Separacao dos digitos
    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    // Inversao do numero
    invertido = unidade * 100 + dezena * 10 + centena;

    cout << "Numero invertido: " << invertido << endl;

    return 0;
}
