#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;
    const float percentualDistribuidor = 0.28; // 28% em decimal
    const float impostos = 0.45; // 45% em decimal

    // Solicitar o custo de fábrica ao usuário
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    // Calcular o custo final ao consumidor
    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * impostos);

    // Exibir o custo final ao consumidor
    printf("O custo final ao consumidor eh: %.2f\n", custoConsumidor);

    return 0;
}