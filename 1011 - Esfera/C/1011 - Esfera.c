#include <stdio.h>
 
int main() {
	double raio, volume, pi=3.14159; // vari�veis
	
	scanf("%lf", &raio); // recebe dados de entrada
	
	volume = (4.0/3.0)*pi*(raio*raio*raio); // realiza o c�lculo
	
	printf("VOLUME = %.3f\n", volume); // apresenta o resultado
    
	return 0;
}
