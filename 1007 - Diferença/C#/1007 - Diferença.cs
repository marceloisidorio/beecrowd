using System;

class URI {
    static void Main() {
        int A, B, C, D, DIF;

        A = Convert.ToInt32(Console.ReadLine());
        B = Convert.ToInt32(Console.ReadLine());
        C = Convert.ToInt32(Console.ReadLine());
        D = Convert.ToInt32(Console.ReadLine());

        DIF = (A*B)-(C*D);

        Console.WriteLine("DIFERENCA = " + DIF);
    }
}