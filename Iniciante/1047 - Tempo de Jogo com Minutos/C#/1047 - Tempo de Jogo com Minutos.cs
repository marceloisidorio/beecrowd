using System;

class URI {
    static void Main() {
        // recebe os valores na mesma linha
        string[] valor = Console.ReadLine().Split(' ');
            // converte cada variável para int
            int hora_ini = int.Parse(valor[0]);
            int min_ini = int.Parse(valor[1]);
            int hora_fin = int.Parse(valor[2]);
            int min_fin = int.Parse(valor[3]);

        // converte o tempo para minutos
        int tempo = ((hora_fin*60) + min_fin) - ((hora_ini*60) + min_ini);
        
        // caso o tempo seja negativo ou igual a 0
        if(tempo <= 0) {
            tempo = tempo + 1440; // 24 horas == 1440 minutos
        }

        // saída
        Console.WriteLine("O JOGO DUROU {0} HORA(S) E {1} MINUTO(S)", tempo/60, tempo%60);
    }
}