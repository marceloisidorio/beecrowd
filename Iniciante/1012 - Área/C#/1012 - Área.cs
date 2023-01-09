using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        double A, B, C, pi = 3.14159;
        double areaTri, areaCir, areaTrap, areaQua, areaRet;

        string[] calculo = Console.ReadLine().Split(' ');
        // separa os valores para cada posição do array
        A = double.Parse(calculo[0]);
        B = double.Parse(calculo[1]); // cada variável recebe seu respectivo valor
        C = double.Parse(calculo[2]);

        areaTri = (A*C)/2;
        areaCir = pi*Math.Pow(C, 2);
        areaTrap = ((A+B)*C)/2;
        areaQua = Math.Pow(B, 2);
        areaRet = A*B;

        Console.WriteLine("TRIANGULO: " + areaTri.ToString("0.000", System.Globalization.CultureInfo.InvariantCulture));
        Console.WriteLine("CIRCULO: " + areaCir.ToString("0.000", System.Globalization.CultureInfo.InvariantCulture));
        Console.WriteLine("TRAPEZIO: " + areaTrap.ToString("0.000", System.Globalization.CultureInfo.InvariantCulture));
        Console.WriteLine("QUADRADO: " + areaQua.ToString("0.000", System.Globalization.CultureInfo.InvariantCulture));
        Console.WriteLine("RETANGULO: " + areaRet.ToString("0.000", System.Globalization.CultureInfo.InvariantCulture));
    }
}