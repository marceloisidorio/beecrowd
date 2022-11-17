#include <stdio.h>

int main() {
	int N, a, m, d; // declaração de variáveis
	
	scanf("%d", &N); // recebe dados de entrada
	
	a = N/365;
	m = (N%365)/30; // realiza cálculos
	d = (N%365)%30;
	
	printf("%d ano(s)\n", a);
	printf("%d mes(es)\n", m); // apresenta resultados
	printf("%d dia(s)\n", d);
	
	return 0;
}
