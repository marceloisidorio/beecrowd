# recebe os valores na mesma linha
num = input().split(' ')

# converte os valores para int
num[0] = int(num[0])
num[1] = int(num[1])
num[2] = int(num[2])

# vetor = num ordenado
ordenado = sorted(num)

# saída ordenada
print(ordenado[0])
print(ordenado[1])
print(ordenado[2])

# linha em branco
print('')

# saída digitada
print(num[0])
print(num[1])
print(num[2])