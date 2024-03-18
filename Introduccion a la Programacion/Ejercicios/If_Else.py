# Codifique un programa que solicite al usuario ingresar dos numeros enteros, y luego informe si la suma de ambos es mayor a 100 o no.

def suma_mayor_a_100(numero1, numero2):
    """
        Returna se la suma de los parametros mayor a 100
    """
    suma = numero1 + numero2
    if suma > 100:
        print("La suma es mayor a 100")
    else:
        print("La suma es menor a 100")

# A continuacion, agregue una funcion que reciba dos enteros como parametro, e informe (mostrando en pantalla) si al menos uno de los valores es mayor a 50.

def hay_mayor_50(numero1, numero2):
    if numero1 > 50 or numero2 > 50:
        print("al menos uno de los numeros es mayor a 50")
    
# A continuacion, agregue una funcion que reciba dos enteros como parametro, e informe (mostrando en pantalla) si ambos valores son menores que 100.

def numeros_menores_100(numero1, numero2):
    if numero1 < 100 and numero2 < 100:
        print ("los numeros son menores a 100")

a = int(input("ingrese un numero: "))
b = int(input("ingrese otro numero: "))
suma_mayor_a_100(a,b)

def test_suma_mayor_a_100():
    print("testeando suma mayor")
    assert suma_mayor_a_100(20,30) == False
    assert suma_mayor_a_100(50,50) == False
    assert suma_mayor_a_100(100, 1) == True
    print("paso")
    test_suma_mayor_a_100()