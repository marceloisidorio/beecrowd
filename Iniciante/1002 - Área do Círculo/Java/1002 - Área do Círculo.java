import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
		
		double raio = leitor.nextDouble();
		double area = Math.pow(raio, 2) * 3.14159;
		
		System.out.printf("A=%.4f", area);

	}

}