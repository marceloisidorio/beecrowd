# entrada do tempo em segundos
N = int(input())

# operações
horas = int(N/3600) # horas = tempo/3600     (3600 == 1 hora)
minutos = int((N%3600)/60) # minutos = resto de horas/60
segundos = int((N%3600)%60) # segundos = resto de minutos/60

# saída do tempo formatado
print('{0}:{1}:{2}'.format(horas, minutos, segundos))