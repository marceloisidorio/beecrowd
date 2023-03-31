#include <stdio.h>

int main() { // variáveis
	int X, Y, OP = 1;
	
	while(OP != 0) {
		scanf("%d %d", &X, &Y); // entrada
		
		if(X > Y) { // condicional + saída
			printf("Decrescente\n");
			
		} else if(X < Y) {
			printf("Crescente\n");
			
		} else if(X == Y) {
			OP = 0; // sai do loop e encerra o programa
		}
	}
	
	
	return 0;
}