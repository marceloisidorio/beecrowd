#include <stdio.h>

int main() {
	int X, Y;
	
	// entrada
	scanf("%d %d", &X, &Y);
	
	// saída
	printf("%d\n", soma(X, Y));
	
	return 0;
} // end main

int soma(int X, int Y) {
	int i;
	int resposta = 0;
	
	if(X<Y) {
		for(i=X+1; i<Y; i++) {
			if(i%2 != 0) { // soma os números ímpares
				resposta += i;
			}
		}
		
	} else {
		for(i=Y+1; i<X; i++) {
			if(i%2 != 0) { // soma os números ímpares
				resposta += i;
			}
		}
	}
	
	return resposta;
	
} // end soma