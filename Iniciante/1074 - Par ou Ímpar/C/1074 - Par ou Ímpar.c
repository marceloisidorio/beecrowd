#include <stdio.h>

int main() { // variáveis
	int N, num, i;
	
	scanf("%d", &N);
	
	// processamento condicional + saída
	for(i=0;i<N;i++) {
		scanf("%d", &num);
		
		if(num%2 == 0) { // verifica se é par ou ímpar
			if(num == 0) { // verifica se num == 0
				printf("NULL\n");
				
			} else {
				printf("EVEN ");
			}
			
		} else if(num%2 != 0) {
			printf("ODD ");
			
		}
		
		if(num > 0) { // verifica se é positivo ou negativo
			printf("POSITIVE\n");
			
		} else if(num < 0) {
			printf("NEGATIVE\n");
			
		}
	}
	
	return 0;
}