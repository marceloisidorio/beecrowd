# entrada de N
N = int(input())

# verifica se 0 < N < 1000000
if N>0 and N<1000000:
    # calcula a quantidade de notas
    n100 = int(N/100)
    resto = N%100

    n50 = int(resto/50) # n50 = inteiro(resto/50)
    resto = resto%50 # resto = resto da divisão(resto/50)

    n20 = int(resto/20)
    resto = resto%20

    n10 = int(resto/10)
    resto = resto%10

    n5 = int(resto/5)
    resto = resto%5

    n2 = int(resto/2)
    resto = resto%2

    n1 = int(resto/1)

    # saída de dados
    print(N)
    print(n100, "nota(s) de R$ 100,00")
    print(n50, "nota(s) de R$ 50,00")
    print(n20, "nota(s) de R$ 20,00")
    print(n10, "nota(s) de R$ 10,00")
    print(n5, "nota(s) de R$ 5,00")
    print(n2, "nota(s) de R$ 2,00")
    print(n1, "nota(s) de R$ 1,00")