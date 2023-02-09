#include <stdio.h>

int main() {
	int N, i;
	
	// entrada
	scanf("%d", &N);
	
	// saída
	if(N > 5 && N < 2000) {
		for(i=1;i<=N;i++) {
			if(i%2 == 0) { // identifica e calcula o quadrado dos pares
				printf("%d^2 = %d\n", i, i*i);
			}
		}
	}
	
	return 0;
}