#include <stdio.h>
#include <locale.h>

int main() {
	// variáveis + entrada
	int I = 1, J = 7;
	
	// contador
	while(I != 11) {
		printf("I=%d J=%d\n", I, J); // saída
		
		J -= 1; // decremento
		
		if(J == 4) {
			I += 2; // incremento
			J = 7; // reseta a variável J
		}
	}
	
	return 0;
}