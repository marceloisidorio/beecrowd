#include <stdio.h>

int main() { // variáveis
	int N, i;
	
	// entrada
	scanf("%d", &N);
	
	if(N > 2 && N < 1000) {
		system("cls"); // limpa a tela
		
		// contador + saída
		for(i=1;i<=10;i++) {
			printf("%d x %d = %d\n", i, N, i*N);
		}
	}
	
	return 0;
}