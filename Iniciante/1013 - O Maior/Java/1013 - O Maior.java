import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
    	// cria um objeto do tipo Scanner
    	Scanner leitor = new Scanner(System.in).useLocale(Locale.US);
    	
    	// recebe os valores na mesma linha
    	int a = leitor.nextInt();
    	int b = leitor.nextInt();
    	int c = leitor.nextInt();
    	
    	// calcula qual valor é maior
    	int maiorAB = (a+b+Math.abs(a-b))/2;
    	maiorAB = (maiorAB+c+Math.abs(maiorAB-c))/2;
    	
    	// apresenta o resultado
    	System.out.println(maiorAB + " eh o maior");
    	
    }
}