#include <stdio.h>

int main() {
	char Tipo; // variáveis
	int i, N, Quantia, Total = 0;
	int Ratos = 0, Sapos = 0, Coelhos = 0;
	double Rato_Percent, Sapo_Percent, Coelho_Percent;
	
	// entrada
	scanf("%d", &N);
	
	// contador de 0 a N
	for(i=0;i<N;i++) {
		// entrada
		scanf("%d %c", &Quantia, &Tipo);
		
		// contagem/soma total
		Total = Total + Quantia;
		
		if(Tipo == 'R' || Tipo == 'r') { // contagem do Tipo
			Ratos = Ratos + Quantia;
			
		} else if(Tipo == 'S' || Tipo == 's') {
			Sapos = Sapos + Quantia;
			
		} else if(Tipo == 'C' || Tipo == 'c') {
			Coelhos = Coelhos + Quantia;
			
		}
		
	}
	
	// cálculo de percentual
	Rato_Percent = (float)(Ratos*100)/Total;
	Sapo_Percent = (float)(Sapos*100)/Total; // (float) indica uma conversão implícita
	Coelho_Percent = (float)(Coelhos*100)/Total;
	
	system("cls"); // limpa a tela
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", Total, Coelhos, Ratos, Sapos); // saída
	printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", Coelho_Percent, Rato_Percent, Sapo_Percent);
	
	return 0;
}