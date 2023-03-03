#include <stdio.h>

int main() {
	// variáveis + entrada
	int I = 1, J = 7, k;
	
	// contador
	while(I != 11) {
		for(k=0;k<3;k++){
			printf("I=%d J=%d\n", I, J); // saída
			J -= 1; // decremento
		}
		I += 2; // incremento
		J += 5; // incremento
		
	}
	
	return 0;
}