//1 - Quest�o:

/* O custo de um carro novo ao consumidor � obtido com a seguinte f�rmula: 
custo final = custo de f�brica + (custo de f�brica * percentual do distribuidor) +
(custo de f�brica * percentual de impostos) */

//Considerando os valores abaixo, fa�a um programa para calcular o custo de fabrica��o.

//Custo de f�brica = 10.000,00
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
