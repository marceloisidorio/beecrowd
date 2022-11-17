#include <stdio.h>

int main(){
	int X; // declaração de variáveis
	float Y, CM;
	
	scanf("%d", &X);
	scanf("%f", &Y); // recebe dados de entrada
	
	CM = (X/Y); // realiza cálculo
	
	printf("%.3f km/l\n", CM); // apresenta o resultado
	
	return 0;
}
