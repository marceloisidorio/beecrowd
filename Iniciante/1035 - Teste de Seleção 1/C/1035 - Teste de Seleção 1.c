#include <stdio.h>
 
int main() {
	int A, B, C, D; // declaração de variáveis
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C); // recebe dados de entrada
	scanf("%d", &D);
	
	if((B>C) && (D>A) && (C+D>A+B) && (C>=0) && (D>=0) && (A%2 == 0)) {
		printf("Valores aceitos\n");
	} else { // condicional aplicada ao resultado
		printf("Valores nao aceitos\n");
	}
	
	return 0;
}
