#include <stdio.h>

int main() {
	float tempo, vmedia;
	float qlitros; // deeclaração de variáveis
	
	scanf("%f %f", &tempo, &vmedia); // recebe dados de entrada
	
	qlitros = vmedia*tempo/12;
	
	printf("%.3f\n", qlitros); // apresenta o resultado
	
	return 0;
}
