import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
		
		double a = leitor.nextDouble();
		double b = leitor.nextDouble();
		double med = ((a*3.5) + (b*7.5)) / 11;
		
		System.out.printf("MEDIA = %.5f\n", med);

	}

}