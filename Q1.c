//1 - Questão:

/* O custo de um carro novo ao consumidor é obtido com a seguinte fórmula: 
custo final = custo de fábrica + (custo de fábrica * percentual do distribuidor) +
(custo de fábrica * percentual de impostos) */

//Considerando os valores abaixo, faça um programa para calcular o custo de fabricação.

//Custo de fábrica = 10.000,00
//Percentual do distribuidor = 28%
//Percentual dos Impostos  = 45% 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv) {
	float Percdistribuidor, Percimpostos, Custfabrica, soma;
	
	Percdistribuidor = 0.28;
	Percimpostos = 0.45;
	soma = 0;

	printf("\n Digite o Custo de Fabrica: ");
	scanf("%f", &Custfabrica);
	
	Custfabrica = Custfabrica + (Custfabrica * Percdistribuidor) + (Custfabrica * Percimpostos);

	printf("\n O Custo final eh: %0.2f\n\n", Custfabrica);
	
	return 0;
}
