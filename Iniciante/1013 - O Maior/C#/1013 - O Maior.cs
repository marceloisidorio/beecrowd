using System;

class URI {
    static void Main() {
        string[] calculo = Console.ReadLine().Split(' ');
        // separa os valores para cada posição do array
        int A = Int32.Parse(calculo[0]);
        int B = Int32.Parse(calculo[1]); // cada variável recebe seu respectivo valor
        int C = Int32.Parse(calculo[2]);

        int maiorAB = (A + B + Math.Abs(A-B))/2;
        int maiorFinal = (maiorAB + C + Math.Abs(maiorAB-C))/2;

        Console.WriteLine(maiorFinal + " eh o maior");
    }
}