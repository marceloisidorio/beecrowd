#include <stdio.h>

int main() { // variáveis
	int i;
	int valor[100], maior, posicao;
	
	for(i=0;i<100;i++) { // contador
		// entrada
		scanf("%d", &valor[i]);
		
		if(valor[i] > maior) { // verifica o n° maior e sua posição
			maior = valor[i];
			posicao = i;
		}
	}
	
	system("cls"); // limpa a tela
	printf("%d\n%d\n", maior, posicao+1); // saída
	
	return 0;
}