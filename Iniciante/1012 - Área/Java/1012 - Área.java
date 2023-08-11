import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
    	// cria um objeto do tipo Scanner
    	Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
    	
    	// recebe os valores na mesma linha
    	float a = leitor.nextFloat();
    	float b = leitor.nextFloat();
    	float c = leitor.nextFloat();
    	
    	// calcula e apresenta o resultado de cada caso
    	System.out.printf("TRIANGULO: %.3f\n", (a*c)/2);
    	System.out.printf("CIRCULO: %.3f\n", 3.14159*Math.pow(c,2));
    	System.out.printf("TRAPEZIO: %.3f\n", ((a+b)*c)/2);
    	System.out.printf("QUADRADO: %.3f\n", Math.pow(b, 2));
    	System.out.printf("RETANGULO: %.3f\n", a*b);
    	
    }
}