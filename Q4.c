//4 - Questão:
//Imagine o seguinte array.

//a = [5, 3, 2, 4, 7, 1, 0, 6]
//Faça um algoritmo que ordene o array acima utilizando o algoritimo de ordenação Bubble Sort.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 8

int main(){	
 	setlocale(LC_ALL, ""); 	
 	int num[TAM] = {5, 3, 2, 4, 7, 1, 0, 6};
 	int i, aux, cont;
 
	printf("\n A Ordem Atual dos Numeros no Array: \n");	
	for (i = 0; i < TAM; i++){
		printf("%4d", num[i]);
	}
	
 	for (cont = 1; cont < TAM; cont++){
 		for (i = 0; i < TAM - 1; i++){
 			if (num[i] > num[i + 1]){
 				aux = num[i];       			
       			num[i] = num[i + 1];
       			num[i + 1] = aux;
			}
		}
	}
	 
	printf("\n Numeros do Array Devidamente em Ordem Crescente: \n");	
	for (i = 0; i < TAM; i++){
		printf("%4d", num[i]);
	}
	
	printf("\n\n");	
	return 0;
}
