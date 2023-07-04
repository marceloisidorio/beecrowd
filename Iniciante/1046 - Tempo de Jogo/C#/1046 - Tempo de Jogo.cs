using System;

class URI {
    static void Main() {
        // recebe os valores na mesma linha
        string[] valor = Console.ReadLine().Split(' ');
            // converte os valores para int
            int hora_ini = int.Parse(valor[0]);
            int hora_fim = int.Parse(valor[1]);
        // variável tempo
        int tempo = 0;
        // verifica qual caso calcular
        if(hora_ini >= hora_fim) {
            tempo = (hora_fim + 24) - hora_ini;

        } else { // tempo final maior
            tempo = hora_fim - hora_ini;

        }
        // saída
        Console.WriteLine("O JOGO DUROU {0} HORA(S)", tempo);

    }
}