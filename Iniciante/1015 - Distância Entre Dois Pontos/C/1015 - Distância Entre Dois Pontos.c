#include <stdio.h>
#include <math.h> // biblioteca matemática

int main() {
	float x1, x2, y1, y2, distancia; // declaração de variáveis
	
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2); // recebe dados de entrada
	
	distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // realiza cálculo
	
	printf("%.4f\n", distancia); // apresenta o resultado
	
	return 0;
}
