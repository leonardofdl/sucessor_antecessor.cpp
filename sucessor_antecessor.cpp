// Programa para calcular o antecessor e o sucessor de um numero

#include <iostream>

using namespace std;

int main() {
    int numero;
    int antecessor, sucessor;

    // Entrada de dados
    cout << "Digite um numero: ";
    cin >> numero;

    // Calculos
    antecessor = numero - 1;
    sucessor = numero + 1;

    // Saida de dados
    cout << "Antecessor: " << antecessor << endl;
    cout << "Sucessor: " << sucessor << endl;

    return 0;
}
