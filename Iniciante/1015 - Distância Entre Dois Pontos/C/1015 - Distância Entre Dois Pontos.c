#include <stdio.h>
#include <math.h> // biblioteca matem�tica

int main() {
	float x1, x2, y1, y2, distancia; // declara��o de vari�veis
	
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2); // recebe dados de entrada
	
	distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); // realiza c�lculo
	
	printf("%.4f\n", distancia); // apresenta o resultado
	
	return 0;
}
