#include <stdio.h>

int main() {
	int i; // variáveis
	float Div;
	int N, X, Y;
	
	scanf("%d", &N); // n° de vezes que executará o laço de repetição
	
	for(i=0;i<N;i++) {
		scanf("%d %d", &X, &Y); // entrada de X e Y
		
		if(Y == 0) { // divisão por 0 impossível
			printf("divisao impossivel\n"); // saída
			
		} else { // realiza a divisão com cast para float
			Div = (float) X / Y;
			
			printf("%.1f\n", Div); // saída
		}
		
	}
	
	return 0;
}