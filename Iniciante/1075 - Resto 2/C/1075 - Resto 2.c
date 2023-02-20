#include <stdio.h>

int main() { // variáveis
	int N, i;
	
	// entrada
	scanf("%d", &N);
	
	// verificação de N
	if(N < 10000) {
		// contador
		for(i = 0;i < 10000; i++) {
			if(i%N == 2) { // verificação + saída
				printf("%d\n", i);
			}
		}
	}
	
	return 0;
}