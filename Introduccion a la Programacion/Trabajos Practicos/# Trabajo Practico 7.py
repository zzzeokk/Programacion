# Trabajo Practico VII

# 1. Cree un script para mostrar los primeros 100 números enteros positivos,
# comenzando desde el 1.

for num in range(1, 101):
    print(num)

# 2. Modifique el script del ejercicio anterior para que se muestren sólo los números
# pares. Para saber si un número es par, utilice el operador de módulo (%).

for num in range(1, 101):
    if num % 2 == 0:
        print(num)

# 3. Cree un script para calcular el resultado de sumar los números desde el 75 al
# 150.

suma = 0
for num in range(75, 151):
    suma += num
    print(suma)

# 4. Cree un script que le solicite al usuario ingresar un número entero, y muestre
# en pantalla el factorial de dicho número. NOTA: puede obviar la validación en
# este ejercicio, pero recuerde que la función range no incluye al valor máximo
# enviado como parámetro.
# factorial de n = n! = 1 * 2 * 3 * ... * (n - 1) * n

num = int(input("Ingrese un numero entero: "))
factorial = 1
for i in range(1, num + 1):
    factorial *= i
print("El factorial de", num, "es:", factorial)

# 5. Cree un script que le solicite al usuario ingresar 10 números enteros, y por cada
# uno, informarle si el mismo es positivo, negativo, o cero.

for i in range(10):
    num = int(input("Ingrese un numero: "))
    if num > 0:
        resultado = "Su numero es Positivo."
    elif num < 0:
        resultado = "Su numero es Negativo."
    else:
        resultado = "Su Numero es cero."
    print(resultado)

# 6. Cree un script que le solicite al usuario ingresar 10 números, y una vez
# ingresados, le muestre en pantalla cuál es el máximo, y en qué posición lo
# ingresó. Por ejemplo, si el usuario ingresa los números 2, 63, -3, 20, 55, 89, 7, 32, 9,
# y 33, se le debería mostrar el mensaje “El mayor número ingresado es 89, y lo
# ingresaste en la posición 6”. NOTA: las posiciones posibles comienzan desde 1.

maximo = None
posicion = None

for i in range(1, 11):
    num = int(input("Ingrese un numero: "))
    if maximo is None or num > maximo:
        maximo = num
        posicion = i
print("El número máximo ingresado es", maximo, "y se encuentra en la posición", posicion)

# 7. Extienda el script del ejercicio anterior para que también informe el número
# mínimo ingresado, y su posición.

maximo = None
minimo = None
posicionMAX = None
posicionMIN = None

for i in range(1, 11):
    num = int(input("Ingrese un numero: "))
    if maximo is None or num > maximo:
        maximo = num
        posicionMAX = i
    if minimo is None or num < minimo:
        minimo = num
        posicionMIN = i
print("El número máximo ingresado es", maximo, "y se encuentra en la posición", posicionMAX)
print("El número minimo ingresado es", minimo, "y se encuentra en la posición", posicionMIN)

# 8. Un cliente ha solicitado un programa que le permita ingresar los mililitros de
# lluvia caídos diariamente en una semana, para que el programa le informe en
# pantalla el promedio de precipitación de esa semana. El cliente también desea
# saber cuál fue el día en que más llovió en la semana.
# A modo ilustrativo, un reporte generado por el programa debería verse como
# sigue, luego de haber leído las precipitaciones de los 7 días de la semana:

dias_semana = ['Domingo', 'Lunes', 'Martes', 'Miércoles', 'Jueves', 'Viernes', 'Sabado']
total_lluvia = 0
mayor_lluvia = 0
dia_mayor_lluvia = ''

for i in range(7):
    mililitros = int(input("Ingrese los mililitros de lluvia para " + dias_semana[i] + ": "))
    total_lluvia += mililitros
    if mililitros > mayor_lluvia:
        mayor_lluvia = mililitros
        dia_mayor_lluvia = dias_semana[i]
promedio = total_lluvia/7
print(f"El promedio de precipitaciones fue de {promedio} mls. diarios.")
print(f"El día de más precipitaciones fue el {dia_mayor_lluvia}.")

# 9. Rehaga el ejercicio 4 (factorial) considerando los siguientes puntos:

# ● Cree la función factorial, que deberá tener como parámetro un número n y
# retornar el factorial del mismo.

# ● Omita el ingreso por teclado, sino que el valor deberá entrar como parámetro de
# la función.

def f_factorial(n):
    if n == 0:
        return 1
    else:
        factorial = 1
        for i in range(1, n + 1):
            factorial *= i
        return factorial

# 10. Cree un test unitario para el ejercicio 4.

def testF_factorial():
    assert f_factorial(0) == 1
    assert f_factorial(1) == 1
    assert f_factorial(2) == 2
    assert f_factorial(3) == 6
    assert f_factorial(4) == 24
    assert f_factorial(5) == 120
    print("Paso!")
