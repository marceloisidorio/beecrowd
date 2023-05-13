# recebe os 4 valores na mesma linha
n1, n2, n3, n4 = input().split(' ')

# converte os valores para float
n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
n4 = float(n4)

# calcula e exibe a média
med = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10
print('Media: {:.1f}'.format(med))

# avalia o resultado da nota
if med >= 7.0:
    print('Aluno aprovado.')

elif med >= 5.0 and med < 7:
    print('Aluno em exame.')

    # reavalia a media com nota do exame
    nota_exame = float(input())
    print('Nota do exame: {:.1f}'.format(nota_exame))
    
    med = (med + nota_exame)/2
    if med >= 5.0:
        print('Aluno aprovado.')

    else:
        print('Aluno reprovado.')

    print('Media final: {:.1f}'.format(med))
else:
    print('Aluno reprovado.')