# recebe os valores na mesma linha
x, y = input().split(' ')

# converte os valores para float
x = float(x)
y = float(y)

# identifica a posição do ponto
if x > 0 and y > 0:
    print('Q1')

elif x < 0 and y > 0:
    print('Q2')

elif x < 0 and y < 0:
    print('Q3')

elif x > 0 and y < 0:
    print('Q4')

elif x == 0 and y == 0:
    print('Origem')

elif x == 0 and y != 0:
    print('Eixo Y')

elif x != 0 and y == 0:
    print('Eixo X')