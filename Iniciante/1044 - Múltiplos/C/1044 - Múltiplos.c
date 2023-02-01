#include <stdio.h>

int main() {
	int A, B;
	
	// entrada
	scanf("%d %d", &A, &B);
	
	if(A%B == 0 || B%A == 0) { // verifica se A ou B são múltiplos
		printf("Sao Multiplos\n");
		
	} else {
		printf("Nao sao Multiplos\n");
		
	}
	
	return 0;
}