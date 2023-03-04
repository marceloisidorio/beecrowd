#include <stdio.h>
// constante senha
#define SENHA 2002

int main() {
	// variáveis
	int chave, op;
	
	while(op == 0) {
		// entrada
		scanf("%d", &chave);
		
		if(chave == SENHA) {
			printf("Acesso Permitido\n");
			op = 1; // encerra o loop
		} else {
			printf("Senha Invalida\n");
			op = 0; // continua o loop
		}
	}
	return 0;
}