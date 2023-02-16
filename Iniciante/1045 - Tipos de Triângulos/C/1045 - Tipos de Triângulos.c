#include <stdio.h>

int main() { // variáveis
	double I, J, K;
	double A, B, C, aux;
	
	// entrada
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A < B) {
		aux = A;
		A = B;
		B = aux;
	}
	if(A < C) { // ordenação dos valores
		aux = A;
		A = C;
		C = aux;
	}
	if(B < C) {
		aux = B;
		B = C;
		C = aux;
	}
	
	I = A*A;
	J = B*B; // atribuição dos quadrados
	K = C*C;
	
	system("cls"); // limpa a tela
	
	// condicional + saída
	if(A >= B+C) {
		printf("NAO FORMA TRIANGULO\n");
		
	} else {
		if(I == J+K) {
			printf("TRIANGULO RETANGULO\n");
		}
		
		if(I > (J+K)) {
			printf("TRIANGULO OBTUSANGULO\n");
		
		}
		
		if(I < J+K) {
			printf("TRIANGULO ACUTANGULO\n");
		
		}
		
		if(A == B && B == C) {
			printf("TRIANGULO EQUILATERO\n");
		
		} else if(A == B || B == C || C == A) {
			printf("TRIANGULO ISOSCELES\n");
		}
		
	}	
	
	return 0;
}