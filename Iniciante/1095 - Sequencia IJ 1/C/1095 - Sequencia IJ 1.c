#include <stdio.h>
#include <locale.h>

int main() {
	// variáveis + entrada
	int I = 1, J = 60;
	
	// contador
	while(J != -5) {
		printf("I=%d J=%d\n", I, J); // saída
		
		I += 3; // incremento
		J -= 5; // decremento
	}
	
	return 0;
}