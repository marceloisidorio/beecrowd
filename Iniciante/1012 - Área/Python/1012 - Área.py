# pega 3 valores na mesma linha e atribui às variáveis
A, B, C = input().split(' ')

# Converte os valores para os tipos necessários 
A = float(A)
B = float(B)
C = float(C)

# cálculos aritméticos
triangulo = (A*C)/2
circulo = 3.14159*(C**2)
trapezio = ((A+B)*C)/2
quadrado = B**2
retangulo = A*B

# saída
print('TRIANGULO: {:.3f}'.format(triangulo))
print('CIRCULO: {:.3f}'.format(circulo))
print("TRAPEZIO: {:.3f}".format(trapezio))
print('QUADRADO: {:.3f}'.format(quadrado))
print('RETANGULO: {:.3f}'.format(retangulo))