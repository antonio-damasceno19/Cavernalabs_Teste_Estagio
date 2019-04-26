//2 - Questão:
//Faça um programa para calcular o juros simples segundo a fórmula abaixo.
//J = C.i.n

//Onde:
//J = juros,
//C = capital,
//i = taxa de empréstimo
//n = períodos
//Vamos imaginar o seguinte cenário: um empréstimo de R$ 23.000,00 sobre a taxa de 3% durante 7 meses.

#include <stdio.h>

int main (){
	int n;
	float C, i, J;
	
	printf("\n Digite o Capital: ");
	scanf("%f", &C);
	
	printf("\n Digite a Taxa de Juros: ");
	scanf("%f", &i);
	
	i = i/100;
	
	printf("\n Digite o Numero de Meses: ");
	scanf("%d", &n);	
	
	J= C*i*n;
	
	printf ("\n Os juros do Capital de %.1f durante %d meses eh de: %.2f \n\n", C, n, J);
	
	return 0;
}
