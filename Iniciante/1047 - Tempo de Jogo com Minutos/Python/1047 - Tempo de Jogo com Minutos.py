# recebe os valores na mesma linha
hora_ini, min_ini, hora_fin, min_fin = input().split(' ')
# converte cada valor para int
hora_ini, min_ini, hora_fin, min_fin = int(hora_ini), int(min_ini), int(hora_fin), int(min_fin)

# converte o tempo total em minutos
tempo = ((hora_fin*60)+min_fin) - ((hora_ini*60)+min_ini)

# caso o tempo seja negativo ou igual a 0
if tempo <= 0:
    tempo = tempo + 1440 # 24h == 1440 minutos

# saída
print("O JOGO DUROU", int(tempo/60), "HORA(S) E", int(tempo%60), "MINUTO(S)")