import math

# recebe os valores na mesma linha e atribui às variáveis
A, B, C = input().split(' ')

# converte os valores para o tipo float
A = float(A)
B = float(B)
C = float(C)

# cálculo de delta
delta = (B**2)-4*A*C

# validação + saída
if A == 0 or delta < 0:
    print('Impossivel calcular')

else:
    # cálculo de bhaskara
    x1 = (-B+math.sqrt(delta))/(2*A)
    x2 = (-B-math.sqrt(delta))/(2*A)

    # saída
    print('R1 = {:.5f}'.format(x1))
    print('R2 = {:.5f}'.format(x2))