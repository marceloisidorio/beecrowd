# recebe os valores na mesma linha
hora_ini, hora_fim = input().split(' ')
# converte os valores para int
hora_ini, hora_fim = int(hora_ini), int(hora_fim)
# verifica qual caso calcular
if hora_ini >= hora_fim:
    tempo = (hora_fim + 24) - hora_ini

else:
    tempo = hora_fim - hora_ini

# saída
print('O JOGO DUROU {:d} HORA(S)'.format(tempo))