# recebe o valor das variáveis na mesma linha
cod, qntd = input().split(' ')

# converte para o tipo int
cod = int(cod)
qntd = int(qntd)

# identificação do produto e seu preço
if cod == 1:
    preco = 4.00

elif cod == 2:
    preco = 4.50

elif cod == 3:
    preco = 5.00

elif cod == 4:
    preco = 2.00

elif cod == 5:
    preco = 1.50

# cálculo do total + saída
total = preco * qntd
print('Total: R$ {:.2f}'.format(total))