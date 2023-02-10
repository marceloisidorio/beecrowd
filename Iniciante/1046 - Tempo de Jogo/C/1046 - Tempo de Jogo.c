#include <stdio.h>

int main() {
	int A, B;
	
	// entrada
	scanf("%d %d", &A, &B);
	
	// saída
	if(A == B) {
		printf("O JOGO DUROU 24 HORA(S)\n");
		
	} else if(B > A) { // tempo final maior
		printf("O JOGO DUROU %d HORA(S)\n", B-A);
		
	} else if(A > B) { // tempo inicial maior
		printf("O JOGO DUROU %d HORA(S)\n", (B+24)-A);
		
	}
	
	return 0;
}