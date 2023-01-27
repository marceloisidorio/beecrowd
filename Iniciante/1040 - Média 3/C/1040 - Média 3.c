#include <stdio.h>

int main() {
	// variáveis
	float n1, n2, n3, n4, nEx;
	
	// entrada
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	// cálculo da média
	float mediaP = ((n1*2)+(n2*3)+(n3*4)+(n4*1)) / 10;
	
	// condicional + saída
	if(mediaP >= 7) {
		printf("Media: %.1f\n", mediaP);
		printf("Aluno aprovado.\n");
		
	} else {
		if(mediaP>=5 && mediaP<7) { // aluno em exame
			scanf("%f", &nEx);
			
			printf("Media: %.1f\n", mediaP);
			printf("Aluno em exame.\n"); // saída
			printf("Nota do exame: %.1f\n", nEx);
			
			float mediaEx = (mediaP+nEx) / 2;
			
			if(mediaEx >=5) { // condicional
			
				printf("Aluno aprovado.\n");
				
			} else {
				printf("Aluno reprovado.\n");
			}
			
			printf("Media final: %.1f\n", mediaEx);
			
		} else if(mediaP < 5) { // aluno reprovado
			printf("Media: %.1f\n", mediaP);
			printf("Aluno reprovado.\n");
		
		}
	}
	
	return 0;
}