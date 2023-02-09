#include <stdio.h>

int main() {
	float N, aux;
	
	scanf("%f", &N);
	
	if(N >= 0.0 && N <= 2000.0) {
		printf("Isento\n");
		
	} else if(N > 2000.0 && N <= 3000.0) { // taxa de 8%
		N = N - 2000.0;
		N = N * 0.08;
		
		printf("R$ %.2f\n", N); // N - (2000 Isento)
		
	} else if(N > 3000.0 && N <= 4500.0) { // taxa de 18%
		N = N - 3000.0;
		N = N * 0.18;
		
		printf("R$ %.2f\n", N+80); // N + (8% de 1000)
		
	} else {
		N = N - 4500.0;
		N = N * 0.28;
		
		printf("R$ %.2f\n", N+80+270); // N + (8% de 1000) + (18% de 1500)
		
	}
	
	return 0;
}