using System;

class URI {
    static void Main() {
        int aux;
        // separa os valores para cada posição do array
        string[] num = Console.ReadLine().Split(' ');
            int X = Int32.Parse(num[0]);
            int Y = Int32.Parse(num[1]);
            int Z = Int32.Parse(num[2]);

            if(X > Y) { // ordena os valores em ordem crescente
                aux = X;
                X = Y;
                Y = aux;
            }
            if(X > Z) {
                aux = X;
                X = Z;
                Z = aux;
            }

            if(Y > Z) {
                aux = Y;
                Y = Z;
                Z = aux;
            }

            Console.WriteLine("{0}\n{1}\n{2}", X, Y, Z); // saída
            Console.WriteLine("\n{0}\n{1}\n{2}", num[0], num[1], num[2]);
    }
}