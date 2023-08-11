import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
		
		int a = leitor.nextInt();
		int b = leitor.nextInt();
		int c = leitor.nextInt();
		int d = leitor.nextInt();
		
		int dif = (a * b) - (c*d);
		
		System.out.println("DIFERENCA = " + dif);

	}

}