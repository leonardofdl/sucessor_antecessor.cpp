// Programa para calcular a diagonal de um paralelepipedo

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int lado_a, lado_b, lado_c;
    double diagonal;

    // Entrada de dados
    cout << "Digite o valor do lado A: ";
    cin >> lado_a;

    cout << "Digite o valor do lado B: ";
    cin >> lado_b;

    cout << "Digite o valor do lado C: ";
    cin >> lado_c;

    // Calculo da diagonal (Teorema de Pitagoras no espaco)
    diagonal = sqrt(
        (lado_a * lado_a) +
        (lado_b * lado_b) +
        (lado_c * lado_c)
    );

    // Saida de dados
    cout << "Diagonal do paralelepipedo: " << diagonal << endl;

    return 0;
}
