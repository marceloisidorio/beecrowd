# recebe os valores na mesma linha
A, B, C = input().split(' ')

# converte de string para float
A = float(A)
B = float(B)
C = float(C)

#       REGRA DO TRIÂNGULO	
#   | b - c | < a < b + c
#   | a - c | < b < a + c
#   | a - b | < c < a + b

if abs(B-C) < A and A < B+C:
    if abs(A-C) < B and B < A+C:
        if abs(A-B) < C and C < A+B:
            perimetro = A+B+C
            print('Perimetro = {:.1f}'.format(perimetro))
else:
    area = ((A+B)*C)/2
    print('Area = {:.1f}'.format(area))