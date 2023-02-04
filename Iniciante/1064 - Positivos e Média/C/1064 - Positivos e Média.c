#include <stdio.h>

int main() {
	int i, contador=0;
	float num[6], med = 0;

	// entrada
	for(i=0; i<6; i++) {
		scanf("%f", &num[i]);
		
		if(num[i] > 0) { // conta os números positivos
			med = med + num[i];
			contador = contador + 1;
		}
	}
	
	// cálculo da média
	med = med/contador;
	
	// saída
	printf("%d valores positivos\n%.1f\n", contador, med);
	return 0;
}