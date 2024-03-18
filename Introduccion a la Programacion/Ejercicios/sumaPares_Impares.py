def sumaParesOImpares(n1, n2, pares):
    suma = 0
    if n1 < n2 and pares == True:
        for num in range(n1, n2 + 1):
            if num % 2 == 0:
                suma += num
    elif n1 < n2 and pares == False:
        for num in range(n1, n2 + 1):
            if num % 2 != 0:
                suma += num
    return suma

