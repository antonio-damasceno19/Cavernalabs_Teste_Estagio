//3 - Questão:
//Faça um programa que descubra a quantidade de vogais da seguinte string, 'paralelepípedo'

#include <stdio.h>

int main() {
    char palavra[14] = "paralelepipedo";
        int i;
        int contador = 0;

    for (i = 0; i<14; i++) {
            if ((palavra[i] == 'a') || (palavra[i] == 'e') || (palavra[i] == 'i') || (palavra[i] == 'o') || (palavra[i] == 'u')){
                contador += 1;
                
            }
        }
        
	
	printf (" \n  A Quantidade de Vogais Eh: %d\n\n", contador);
    return 0;
}
