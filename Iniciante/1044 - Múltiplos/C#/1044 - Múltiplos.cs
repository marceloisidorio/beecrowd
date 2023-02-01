using System;

class URI {
    static void Main() {
        // separa os valores para cada posição do array
        string[] entrada = Console.ReadLine().Split(' ');
        int A = Int32.Parse(entrada[0]);
        int B = Int32.Parse(entrada[1]);

        if(A%B == 0 || B%A == 0) { // verifica se A ou B são múltiplos
            Console.WriteLine("Sao Multiplos");

        } else {
            Console.WriteLine("Nao sao Multiplos");
        }
    }
    
}