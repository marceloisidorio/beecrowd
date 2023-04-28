# pega 3 valores na mesma linha e atribui às variáveis
A, B, C = input().split(' ')

# Converte os valores para os tipos necessários
A = int(A)
B = int(B)
C = int(C)

# cálculos aritméticos
maiorAB = (A+B+abs(A-B))/2
maiorAB = int((maiorAB+C+abs(maiorAB-C))/2)

# saída
print(maiorAB, 'eh o maior')