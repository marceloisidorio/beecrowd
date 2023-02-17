#include <stdio.h>

int main() { // variáveis
	int tempo;
	int hora, minuto, horafinal, minutofinal;
	
	// entrada
	scanf("%d %d %d %d", &hora, &minuto, &horafinal, &minutofinal);
	
	// conversão do tempo em minutos
	tempo = ((horafinal*60)+minutofinal) - ((hora*60)+minuto);
	
	// caso o tempo seja negativo ou igual a 0
	if(tempo <= 0) {
		tempo = tempo + 1440; // 24 horas == 1440 minutos
		
	}
	
	// saída
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo/60, tempo%60);
	
	return 0;
}