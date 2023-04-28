# pega 3 valores na mesma linha e atribui às variáveis
x1, y1 = input().split(' ')
x2, y2 = input().split(' ')

# Converte os valores para os tipos necessários
x1 = float(x1)
y1 = float(y1)
x2 = float(x2)
y2 = float(y2)

# cálculo da distância de dois pontos
distancia = (((x2-x1)**2) + ((y2-y1)**2))**(1/2)
# raíz quadrada = X**(1/2)

# saída
print('{:.4f}'.format(distancia))