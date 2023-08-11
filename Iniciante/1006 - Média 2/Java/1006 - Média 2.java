import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
		
		double a = leitor.nextDouble();
		double b = leitor.nextDouble();
		double c = leitor.nextDouble();
		
		double med = ((a*2) + (b*3) + (c*5)) / 10;
		
		System.out.printf("MEDIA = %.1f\n", med);

	}

}