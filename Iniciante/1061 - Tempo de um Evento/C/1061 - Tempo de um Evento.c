#include <stdio.h>

int main() { // variáveis
	int dia, hora, minuto, segundo, diafinal, horafinal, minutofinal, segundofinal;
	
	// entrada do início
	scanf("%*s %d", &dia);
	// o '*' indica que o valor não será armazenado
	scanf("%d %*s %d %*s %d", &hora, &minuto, &segundo);
	// entrada final
	scanf("%*s %d", &diafinal);
	scanf("%d %*s %d %*s %d", &horafinal, &minutofinal, &segundofinal);
	
	dia = diafinal-dia;
	hora = horafinal-hora;
	minuto = minutofinal-minuto; // cálculo da variação de tempo
	segundo = segundofinal-segundo;
	
	if(segundo < 0) {
		segundo += 60;
		minuto--;
	}
	
	if(minuto < 0) { // verificação para os valores não ficarem negativos
		minuto += 60;
		hora--;
	}
	
	if(hora < 0) {
		hora += 24;
		dia--;
	}
	
	system("cls"); // limpa a tela
	// saída 
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minuto, segundo);
	
	return 0;
}