#include <stdio.h>

int main() { // variáveis
	int X, Y, OP = 1;
	
	while(OP != 0) {
		scanf("%d %d", &X, &Y); // entrada
		
		if(X > 0 && Y > 0) {
			printf("primeiro\n"); // saída
			
		} else if(X < 0 && Y > 0) {
			printf("segundo\n"); // saída
			
		} else if(X < 0 && Y < 0) {
			printf("terceiro\n"); // saída
			
		} else if(X > 0 && Y < 0) {
			printf("quarto\n"); // saída
			
		} else { // caso X ou Y == 0
			OP = 0;
			// OP encerra o laço
		}
		
	}
	
	return 0;
}