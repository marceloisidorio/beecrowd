#include <stdio.h>

int main() {
	int A, B, C; // variáveis
	int X, Y, Z, aux;
	
	scanf("%d %d %d", &A, &B, &C); // entrada
	
	X = A;
	Y = B; // atribuição de valores
	Z = C;
	
	if(X > Y) { // ordenação dos valores
		aux = X;
		X = Y;
		Y = aux;
	}
	if(X > Z) {
		aux = X;
		X = Z;
		Z = aux;
	}
	
	if(Y > Z) {
		aux = Y;
		Y = Z;
		Z = aux;
	}

	printf("%d\n%d\n%d\n\n", X, Y, Z);
	printf("%d\n%d\n%d\n", A, B, C); // saída
	
	return 0;
}