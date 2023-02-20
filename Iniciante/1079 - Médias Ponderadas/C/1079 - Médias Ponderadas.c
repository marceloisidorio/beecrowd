#include <stdio.h>

int main() { // variáveis
	int N, i;
	float nota1, nota2, nota3, media;
	
	// entrada
	scanf("%d", &N);
	
	for(i=0;i<N;i++) { // contador
		// entrada
		scanf("%f %f %f", &nota1, &nota2, &nota3);
		
		// cálculo da média ponderada
		media = ((nota1*2)+(nota2*3)+(nota3*5))/10;
		
		// saída
		printf("%.1f\n", media);
	}
	
	return 0;
}