#include <stdio.h>

int main(){
	int X; // declara��o de vari�veis
	float Y, CM;
	
	scanf("%d", &X);
	scanf("%f", &Y); // recebe dados de entrada
	
	CM = (X/Y); // realiza c�lculo
	
	printf("%.3f km/l\n", CM); // apresenta o resultado
	
	return 0;
}
