using System;

class URI {
    static void Main() {
        int n100, n50, n20, n10, n5, n2, n1, resto;
        int valor = Int32.Parse(Console.ReadLine());

        n100 = valor/100;
        resto = valor%100; // guarda o valor restante da divisão

        n50 = resto/50;
        resto = resto%50;

        n20 = resto/20;
        resto = resto%20;

        n10 = resto/20;
        resto = resto%20;

        n5 = resto/5;
        resto = resto%5;

        n2 = resto/2;
        resto = resto%2;

        n1 = resto/1;

        Console.WriteLine(valor);
        Console.WriteLine("{0} nota(s) de R$ 100,00", n100);
        Console.WriteLine("{0} nota(s) de R$ 50,00", n50);
        Console.WriteLine("{0} nota(s) de R$ 20,00", n20);
        Console.WriteLine("{0} nota(s) de R$ 10,00", n10);
        Console.WriteLine("{0} nota(s) de R$ 5,00", n5); // apresenta os resultados na tela
        Console.WriteLine("{0} nota(s) de R$ 2,00", n2);
        Console.WriteLine("{0} nota(s) de R$ 1,00", n1);
    }
}