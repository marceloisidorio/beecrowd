#include <stdio.h>

int main() {
	float A, B, C;
	
	// entrada
	scanf("%f %f %f", &A, &B, &C);
	
	/* REGRA DO TRIÂNGULO
	
	| b - c | < a < b + c
	| a - c | < b < a + c
	| a - b | < c < a + b
	
	*/
	
	if(fabs(B-C)<A && A<(B+C)) { // verificação do triângulo / trapézio
		if(fabs(A-C)<B && B<(A+C)) {
			if(fabs(A-B)<C && C<(A+B)) {
				printf("Perimetro = %.1f\n", A+B+C);
				
			}
		}
		
	} else {
		printf("Area = %.1f\n", ((A+B)*C)/2);
	}
	
	return 0;
}