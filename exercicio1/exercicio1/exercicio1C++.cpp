#include <iostream>
using namespace std;


float calcularTotalTermal() {
    float total = 0;
    
    total += 300.00;  // Instalação
    total += 150.00;  // Limpeza
    total += 499.99;  // Manutenção
    return total;
}

// Função para calcular o salário de Joaquim
float calcularSalarioJoaquim() {
    float salarioPorHora = 35.00;
    int horasPorDia = 8;
    // Calculando o salário diário
    float salarioDiario = salarioPorHora * horasPorDia;
    return salarioDiario;
}

// Função para calcular quantos bombons Pamela tem
int calcularBombonsPamela() {
    int bombonsPorCaixa = 27;
    int bombonsComprados = 16;
    // Calculando o total de bombons que Pamela tem
    int totalBombons = bombonsPorCaixa * bombonsComprados;
    return totalBombons;
}


int calcularCaixasAgua(int totalGarrafas) {
    int garrafasPorCaixa = 20;
    // Calculando o total de caixas usadas
    int totalCaixas = totalGarrafas / garrafasPorCaixa;
    return totalCaixas;
}

// Funcao para calcular o número de camisetas e o faturamento
void calcularCamisetasEFaturamento(int camisetasIniciais, int vendidas, int camisetasNovas) {
    int totalCamisetas = camisetasIniciais - vendidas + camisetasNovas;
    float faturamento = totalCamisetas * 30.00;
    cout << "Número total de camisetas: " << totalCamisetas << endl;
    cout << "Faturamento total: R$" << faturamento << endl;
}

int main() {
    // Problema 1
    float totalTermal = calcularTotalTermal();
    cout << "O cliente deverá pagar R$" << totalTermal << " para a empresa Termal." << endl;

    // Problema 2
    float salarioJoaquim = calcularSalarioJoaquim();
    cout << "Joaquim deve receber R$" << salarioJoaquim << " ao final do dia." << endl;

    // Problema 3
    int bombonsPamela = calcularBombonsPamela();
    cout << "Pamela tem " << bombonsPamela << " bombons." << endl;

    // Problema 4
    int totalGarrafas = 300;
    int caixasUsadas = calcularCaixasAgua(totalGarrafas);
    cout << "Foram usadas " << caixasUsadas << " caixas de água." << endl;

    // Problema 5
    int camisetasIniciais = 120;
    int vendidas = 80;
    int camisetasNovas = 50;
    calcularCamisetasEFaturamento(camisetasIniciais, vendidas, camisetasNovas);

    return 0;
}
