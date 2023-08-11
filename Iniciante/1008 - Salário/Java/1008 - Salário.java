import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
		
		int id = leitor.nextInt();
		int horasTrabalhadas = leitor.nextInt();
		double valorHora = leitor.nextDouble();
		
		double salario = (valorHora * horasTrabalhadas);
		
		System.out.println("NUMBER = " + id);
		System.out.printf("SALARY = U$ %.2f\n", salario);

	}

}