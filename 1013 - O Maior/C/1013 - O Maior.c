#include <stdio.h>
 
int main() {
	int A, B, C, Mab, Mac; // declaração de variáveis
	
	scanf(" %d %d %d", &A, &B, &C); // recebe os dados de entrada
	
	Mab = (A+B+abs(A-B))/2;
	Mac = (Mab+C+abs(Mab-C))/2; // realiza o cálculo
	
	printf("%d eh o maior\n", Mac); // apresenta o resultado
	
	return 0;
}
