#include <stdio.h>
#include <math.h> // biblioteca matem�tica

int main() {
	
	double A, B, C, delta, x1, x2; // declara��o de vari�veis
	
	scanf("%lf %lf %lf", &A, &B, &C); // recebe dados de entrada
	
	delta = pow(B, 2)-4*A*C;
	x1 = (-B+sqrt(delta))/(2*A); // realiza c�lculos
	x2 = (-B-sqrt(delta))/(2*A);
	
	system("cls"); // limpa a tela
	
	if(A == 0 || delta < 0) { // condicional
		printf("Impossivel calcular\n");
	} else {
		printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);	
	}
	
	return 0;
}
