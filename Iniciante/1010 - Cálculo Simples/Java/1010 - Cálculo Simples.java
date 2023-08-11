import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		// objeto para leitura dos dados de entrada
		Scanner leitor = new Scanner(System.in).useLocale(Locale.US);

		// recebe os valores na mesma linha
		int cod1 = leitor.nextInt();
		int qtd1 = leitor.nextInt();
		double valorUnit1 = leitor.nextDouble();

		// recebe os valores na mesma linha
		int cod2 = leitor.nextInt();
		int qtd2 = leitor.nextInt();
		double valorUnit2 = leitor.nextDouble();

		// cálculo do total
		double total = (qtd1*valorUnit1) + (qtd2 * valorUnit2);
        
		// saída
		System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
		
	}

}