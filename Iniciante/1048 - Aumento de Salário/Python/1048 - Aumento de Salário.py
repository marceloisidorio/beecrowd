# entrada
sal_ini = float(input())

# identifica o percentual do reajuste
if sal_ini > 0 and sal_ini <= 400:
    reajuste = 0.15

elif sal_ini > 400 and sal_ini <= 800:
    reajuste = 0.12

elif sal_ini > 800 and sal_ini <= 1200:
    reajuste = 0.10

elif sal_ini > 1200 and sal_ini <= 2000:
    reajuste = 0.07

elif sal_ini > 2000:
    reajuste = 0.04

# cálculo do salário + reajuste
sal_final = sal_ini + (sal_ini*reajuste)

# saída
print("Novo salario: {:.2f}".format(sal_final))
print("Reajuste ganho: {:.2f}".format(sal_ini*reajuste))
print("Em percentual:", int(reajuste*100), "%")