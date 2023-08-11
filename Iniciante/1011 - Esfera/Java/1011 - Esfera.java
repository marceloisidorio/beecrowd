import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		// objeto para leitura dos dados de entrada
		Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
		
		// recebe o valor do raio
		double raio = leitor.nextDouble();
		
		// calcula o volume
		double volume = (4/3.0) * 3.14159 * Math.pow(raio, 3);
		
		// saída
		System.out.printf("VOLUME = %.3f\n", volume);
		
	}

}