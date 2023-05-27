# recebe os valores na mesma linha
A, B = input().split(' ')

# converte para int
A = int(A)
B = int(B)

# verificação + saída
if A%B == 0 or B%A == 0:
    print('Sao Multiplos')

else:
    print('Nao sao Multiplos')