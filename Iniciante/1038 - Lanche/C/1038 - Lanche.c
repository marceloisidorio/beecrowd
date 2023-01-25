#include <stdio.h>

int main() {
	float valor;  // variáveis
	int cod, quant;
	
	scanf("%d %d", &cod, &quant); // entrada
	
	if(cod == 1) { // condicional
		valor = 4.00;
	
	} else if(cod == 2) {
		valor = 4.50;
	
	} else if(cod == 3) {
		valor = 5.00;
		
	} else if(cod == 4) {
		valor = 2.00;
		
	} else if(cod == 5) {
		valor = 1.50;
		
	}
	
	printf("Total: R$ %.2f\n", quant*valor); // cálculo + saída

	return 0;	
}