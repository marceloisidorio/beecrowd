#include <stdio.h>
 
int main() {
	int A, B, C, Mab, Mac; // declara��o de vari�veis
	
	scanf(" %d %d %d", &A, &B, &C); // recebe os dados de entrada
	
	Mab = (A+B+abs(A-B))/2;
	Mac = (Mab+C+abs(Mab-C))/2; // realiza o c�lculo
	
	printf("%d eh o maior\n", Mac); // apresenta o resultado
	
	return 0;
}
