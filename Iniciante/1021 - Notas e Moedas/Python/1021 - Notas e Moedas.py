# entrada do valor monetário
N = float(input())

if N > 0 and N < 1000000.00:
    # decomposição das notas
    n100 = int(N/100)
    resto = N%100

    n50 = int(resto/50)
    resto = resto%50

    n20 = int(resto/20)
    resto = resto%20

    n10 = int(resto/10)
    resto = resto%10

    n5 = int(resto/5)
    resto = resto%5

    n2 = int(resto/2)
    resto = resto%2

    # decomposição das moedas
    n1 = int(resto/1)
    resto = resto%1

    n050 = int(resto/0.50)
    resto = resto%0.50

    n025 = int(resto/0.25)
    resto = resto%0.25

    n010 = int(resto/0.10)
    resto = resto%0.10

    n005 = int(resto/0.05)
    resto = resto%0.05

    n001 = int(resto/0.01)

    # saída do valor formatado
    print('NOTAS:')
    print(n100, 'nota(s) de R$ 100.00')
    print(n50, 'nota(s) de R$ 50.00')
    print(n20, 'nota(s) de R$ 20.00')
    print(n10, 'nota(s) de R$ 10.00')
    print(n5, 'nota(s) de R$ 5.00')
    print(n2, 'nota(s) de R$ 2.00')

    print('MOEDAS:')
    print(n1, 'moeda(s) de R$ 1.00')
    print(n050, 'moeda(s) de R$ 0.50')
    print(n025, 'moeda(s) de R$ 0.25')
    print(n010, 'moeda(s) de R$ 0.10')
    print(n005, 'moeda(s) de R$ 0.05')
    print(n001, 'moeda(s) de R$ 0.01')