# recebe os valores na mesma linha
A, B, C = input().split(' ')
# converte para float
A, B, C = float(A), float(B), float(C)
# ordena os valores em ordem decrescente
if A < B:
    aux = A
    A = B
    B = aux

if A < C:
    aux = A
    A = C
    C = aux

if B < C:
    aux = B
    B = C
    C = aux

# adiciona às variaveis os quadrados da entrada
I, J, K = A**2, B**2, C**2
# condicional + saída
if A >= B+C:
    print("NAO FORMA TRIANGULO")

else:
    if I == J+K:
        print("TRIANGULO RETANGULO")

    if I > J+K:
        print("TRIANGULO OBTUSANGULO")

    if I < J+K:
        print("TRIANGULO ACUTANGULO")

    if A == B and B == C:
        print("TRIANGULO EQUILATERO")

    elif A == B or B == C or C == A:
        print("TRIANGULO ISOSCELES")