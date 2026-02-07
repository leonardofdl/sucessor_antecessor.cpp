// Programa para calcular salario bruto, desconto e salario liquido

#include <iostream>

using namespace std;

int main() {
    float horas_trabalhadas;
    float valor_hora;
    float percentual_desconto;
    float salario_bruto;
    float desconto;
    float salario_liquido;

    // Entrada de dados
    cout << "Digite a quantidade de horas trabalhadas: ";
    cin >> horas_trabalhadas;

    cout << "Digite o valor da hora trabalhada: ";
    cin >> valor_hora;

    cout << "Digite o percentual de desconto: ";
    cin >> percentual_desconto;

    // Calculos
    salario_bruto = horas_trabalhadas * valor_hora;
    desconto = salario_bruto * (percentual_desconto / 100);
    salario_liquido = salario_bruto - desconto;

    // Saida de dados
    cout << "Salario bruto: " << salario_bruto << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Salario liquido: " << salario_liquido << endl;

    return 0;
}
