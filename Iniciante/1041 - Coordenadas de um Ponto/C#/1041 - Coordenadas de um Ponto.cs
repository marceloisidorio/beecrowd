using System;

class URI {
    static void Main() {
        // separa os valores para cada posição do array
        string[] coordenadas = Console.ReadLine().Split(' ');
            float p1 = float.Parse(coordenadas[0]);
            float p2 = float.Parse(coordenadas[1]);

        if(p1>0 && p2>0) { // saída com condicional
            Console.WriteLine("Q1");

        } else if(p1<0 && p2>0) {
            Console.WriteLine("Q2");

        } else if(p1<0 && p2<0) {
            Console.WriteLine("Q3");

        } else if(p1>0 && p2<0) {
            Console.WriteLine("Q4");

        } else if(p1==0 && p2==0) {
            Console.WriteLine("Origem");

        } else if(p1==0 && p2!=0) {
            Console.WriteLine("Eixo Y");

        } else if(p1!=0 && p2==0) {
            Console.WriteLine("Eixo X");
        }
    }
}