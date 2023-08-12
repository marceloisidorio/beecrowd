import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
		
		String nome = leitor.next();
		double salarioFixo = leitor.nextDouble();
		double totalVendas = leitor.nextDouble();
		
		double salarioFinal = (totalVendas*0.15) + salarioFixo;
		
		System.out.printf("TOTAL = R$ %.2f\n", salarioFinal);

	}

}