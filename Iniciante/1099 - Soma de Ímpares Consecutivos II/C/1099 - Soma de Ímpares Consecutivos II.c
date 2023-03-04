#include <stdio.h>

int main() {
	// variáveis
	int N, X, Y, soma = 0, i, j;
	
	// entrada
	scanf("%d", &N);
	
	for(i=0;i<N;i++) {
		scanf("%d %d", &X, &Y);
		
		if(X < Y) { // se X for menor que Y
			// contador inicia em X+1, e vai até Y
			for(j=X+1;j<Y;j++) {
				if(j%2 != 0) { // se j == ÍMPAR, é atribuído a variável soma
					soma += j;
				}
			}
		} else { // se X for maior que Y
			// contador inicia em Y+1, e vai até X
			for(j=Y+1;j<X;j++) {
				if(j%2 != 0) { // se j == ÍMPAR, é atribuído a variável soma
					soma += j;
				}
			}
		}
		
		// saída
		printf("%d\n", soma);
		soma = 0; // reseta a variável
	}
	
	return 0;
}