#include <stdio.h>

int main() {
	int num[5];
	int i, contador=0;

	// entrada
	for(i=0; i<5; i++) {
		scanf("%d", &num[i]);
		
		if(num[i]%2 == 0) { // conta os números pares
			contador = contador + 1;
		}
	}
	
	// saída
	printf("%d valores pares\n", contador);
	return 0;
}