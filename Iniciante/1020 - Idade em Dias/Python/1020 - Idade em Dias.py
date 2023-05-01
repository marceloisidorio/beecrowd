# entrada da idade em dias
idade = int(input())

# operações matemáticas
anos = int(idade/365) # anos = inteiro de idade em dias/365
meses = int((idade%365)/30) # meses = inteiro do resto de anos/30
dias = int((idade%365)%30) # dias = inteiro do resto de meses

# saída da idade formatada
print(anos, 'ano(s)')
print(meses, 'mes(es)')
print(dias, 'dia(s)')