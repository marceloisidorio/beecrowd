#include <stdio.h>

int main() {
	int N, h, m, s; // declaração de variáveis
	
	scanf("%d", &N); // recebe dados de entrada
	
	h = N/3600;
	m = (N%3600)/60; // realiza cálculos
	s = (N%3600)%60;
	
	printf("%d:%d:%d\n", h, m, s); // apresenta o resultado
	
	return 0;
}
