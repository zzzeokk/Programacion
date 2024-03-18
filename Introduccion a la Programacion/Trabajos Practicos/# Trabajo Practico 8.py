# Trabajo Practico VIII

# 1. Cree un script que le pida al usuario ingresar palabras, una a una, hasta que el
# usuario ingrese la palabra “parar”. A medida que se van ingresando las palabras,
# el programa simplemente debe mostrarlas en pantalla. Al detectar la palabra
# para detenerse, debe mostrar el mensaje “--- TERMINADO ---”.

print("Ingrese palabras una a una. Ingrese 'parar' para finalizar.")
while True:
    palabra = input("Ingrese una palabra: ")
    if palabra == "parar":
        print("--- TERMINADO ---")
        break
    print(palabra)

# 2. Cree un script que le solicite al usuario ingresar notas de parciales por teclado,
# hasta que el usuario ingrese el valor -1, indicando que ya no hay más notas para
# cargar. Una vez ingresadas las notas, el programa debe informar la nota
# promedio (tenga cuidado de no incluir al -1 dentro del promedio).

total_notas = 0
cantidad_notas = 0

print("Ingrese las notas de los parciales. Ingrese '-1' para finalizar.")
while True:
    notas = int(input("Ingrese una nota de parcial (-1 para finalizar): "))
    if notas == -1:
        break
    total_notas += notas
    cantidad_notas += 1

if cantidad_notas > 0:
    promedio = total_notas / cantidad_notas
    print(f"La nota promedio es: {promedio}")
else:
    print("No se ingresaron notas.")

# 3. Cree un script que le solicite al usuario ingresar un número entero entre 1 y 100. El
# programa debe ser capaz de solicitarle al usuario que reingrese el número
# cuantas veces sea necesario, hasta que el usuario provea un dato válido. Cada
# vez que detecte un error de validación, informele al usuario cuál fue el error, con
# los mensajes “El dato ingresado no es numérico.”, o “El número ingresado está
# fuera del rango permitido.”. Finalmente, cuando el usuario ingrese un dato
# válido, muestre el mensaje “[NÚMERO] es válido. Gracias!”.

numero = input("Ingrese números enteros entre 1 y 100 (Ingrese -1 para salir.): ")

while numero != -1:
    if not numero.isdigit():
        print("El dato ingresado no es numérico.")
    else:
        numero = int(numero)
        if numero < 1 or numero > 100:
            print("El número ingresado está fuera del rango permitido.")
        else:
            print(numero, "es válido. ¡Gracias!")
    
    numero = input("Ingrese números enteros entre 1 y 100 (Ingrese -1 para salir.): ")


# 4. El programa deberá mostrar el menú y reaccionar a la opción seleccionada por el
# usuario, al ejecutar una opción, en vez de terminar el programa, se mostrará
# nuevamente el menú, hasta que el usuario seleccione la opción 4. Salir.

# ********* MI PROGRAMA *********
# 1. Saludar.
# 2. Informar temperatura.
# 3. Mostrar nombre de materia.
# 4. Salir.
# Seleccione una opción [1-4]:

# Tip 1: crear al menos una función propia, que se encargue exclusivamente de
# mostrar el menú de opciones en pantalla.

# Tip 2: puede utilizar la instrucción os.system('cls') para limpiar la pantalla
# antes de volver a mostrar el menú. De esta manera su programa será más legible
# en la terminal. Para poder utilizar dicha instrucción deberá importar, al principio
# del script, la librería os de la siguiente manera:

# import os
# # su código

# Tip 3: antes de limpiar la pantalla y volver a mostrar el menú, puede esperar a
# que el usuario confirme que ha terminado de leer la información presentada,
# simplemente utilizando la función input(‘[PRESIONE ENTER PARA
# CONTINUAR’).

import os

def mostrar_menu():
    print("********* MI PROGRAMA *********")
    print("1. Saludar.")
    print("2. Informar temperatura.")
    print("3. Mostrar nombre de materia.")
    print("4. Salir.")
    print()

def saludar():
    print("¡Hola! Bienvenido/a al programa.")

def informar_temperatura():
    temperatura = 25.5
    print("La temperatura actual es:", temperatura)

def mostrar_nombre_materia():
    materia = "Programacion"
    print("El nombre de la materia es:", materia)

def esperar_confirmacion():
    input("Presione Enter para continuar...")

def main():
    opcion = None
    while opcion != "4":
        mostrar_menu()
        opcion = input("Seleccione una opción [1-4]: ")

        if opcion == "1":
            saludar()
            esperar_confirmacion()
            os.system('cls')  
        elif opcion == "2":
            informar_temperatura()
            esperar_confirmacion()
            os.system('cls')  
        elif opcion == "3":
            mostrar_nombre_materia()
            esperar_confirmacion()
            os.system('cls')  
        elif opcion == "4":
            print("Hasta luego. ¡Gracias por utilizar el programa!")
        else:
            print("Opción inválida. Por favor, seleccione una opción válida.")
            esperar_confirmacion()
            os.system('cls')  

main()

# 5. Si bien el While es útil cuando desconocemos la cantidad de veces que
# repetiremos un bloque de instrucciones, también puede ser utilizado en los
# mismos casos que es utilizado el For (aunque la inversa no es verdadera).
# Rehaga todos los ejercicios del Trabajo Práctico VII utilizando un While en
# lugar de un For.

# 1. Cree un script para mostrar los primeros 100 números enteros positivos,
# comenzando desde el 1.

numero = 1
contador = 0

while contador < 100:
    print(numero)
    numero += 1
    contador += 1

# 2. Modifique el script del ejercicio anterior para que se muestren sólo los números
# pares. Para saber si un número es par, utilice el operador de módulo (%).

numero = 1
contador = 0

while contador < 100:
    if numero % 2 == 0:
        print(numero)
        contador += 1
    numero += 1

# 3. Cree un script para calcular el resultado de sumar los números desde el 75 al
# 150.

inicio = 75
fin = 150
suma = 0
numero = inicio

while numero <= fin:
    suma += numero
    numero += 1
print(suma)

# 4. Cree un script que le solicite al usuario ingresar números enteros, y muestre
# en pantalla el factorial de dicho número.

numero = int(input("Ingrese un número entero positivo (ingrese -1 para salir): "))

while numero != -1:
    if numero < 0:
        print("El factorial no está definido para números negativos.")
    else:
        factorial = 1
        contador = 1

        while contador <= numero:
            factorial *= contador
            contador += 1

        print(f"El factorial de {numero} es: {factorial}")

    numero = int(input("Ingrese otro número entero positivo (ingrese -1 para salir): "))

# 5. Cree un script que le solicite al usuario ingresar números enteros, y por cada
# uno, informarle si el mismo es positivo, negativo, o cero.

numero = int(input("Ingrese un número entero (ingrese -1 para salir): "))

while numero != -1:
    if numero > 0:
        print(f"El número {numero} es positivo.")
    elif numero < 0:
        print(f"El número {numero} es negativo.")
    else:
        print("El número es cero.")

    numero = int(input("Ingrese otro número entero (ingrese -1 para salir): "))

# 6. Cree un script que le solicite al usuario ingresar números enteros, y una vez
# ingresados, le muestre en pantalla cuál es el máximo, y en qué posición lo
# ingresó.

posicion = 0
maximo = None
contador = 0

num = int(input("Ingrese un numero (ingrese -2 para salir, y -3 para mostrar el numero): "))

while num != -2:
    if maximo is None or num > maximo:
        maximo = num
        posicion = contador

    contador += 1
    num = int(input("Ingrese un numero (ingrese -2 para salir, y -3 para mostrar el numero): "))

    if num == -3:
        print(f"El número máximo ingresado es {maximo} y se encuentra en la posición {posicion}")

# 7. Extienda el script del ejercicio anterior para que también informe el número
# mínimo ingresado, y su posición.

maximo = None
minimo = None
posicionMAX = 0
posicionMIN = 0
contador = 0


num = int(input("Ingrese un numero (ingrese -2 para salir, y -3 para mostrar el numero): "))

while num != -2:
    if maximo is None or num > maximo:
        maximo = num
        posicionMAX = contador

    if minimo is None or num < minimo:
        minimo = num
        posicionMIN = contador
   
    contador += 1
    num = int(input("Ingrese un numero (ingrese -2 para salir, y -3 para mostrar el numero): "))

    if num == -3:
        print("El número maximo ingresado es", maximo, "y se encuentra en la posición", posicionMAX + 1)
        print("El número minimo ingresado es", minimo, "y se encuentra en la posición", posicionMIN + 1)

# 8. Un cliente ha solicitado un programa que le permita ingresar los mililitros de
# lluvia caídos diariamente en una semana, para que el programa le informe en
# pantalla el promedio de precipitación de esa semana. El cliente también desea
# saber cuál fue el día en que más llovió en la semana.




# 6. Rehaga el ejercicio 3 considerando los siguientes puntos:

# ● Cree la función validarNumero, que deberá tener como parámetro un número n y
# retornar True si esta dentro del rango y false si esta por fuera

# ● Omita el ingreso por teclado, sino que el valor deberá entrar como parámetro de la
# función.

numero = input("Ingrese números enteros entre 1 y 100 (Ingrese -1 para salir.): ")

while numero != -1:
    if not numero.isdigit():
        print("El dato ingresado no es numérico.")
    else:
        numero = int(numero)
        if numero < 1 or numero > 100:
            print("El número ingresado está fuera del rango permitido.")
        else:
            print(numero, "es válido. ¡Gracias!")
    
    numero = input("Ingrese números enteros entre 1 y 100 (Ingrese -1 para salir.): ")

###############################################

def validarNumero(n):
    if n.isdigit() and 1 <= n <= 100:
        return True
    else:
        return False

validarNumero()

def verificar_numero(n):
    if validarNumero(n):
        print(f"{n} es válido. ¡Gracias!")
    else:
        print(f"El número {n} está fuera del rango permitido.")

verificar_numero()

def testVerificar_numero():
    assert verificar_numero(0) == "El número 0 está fuera del rango permitido."
    assert verificar_numero(1) == "1 es válido. ¡Gracias!"
    assert verificar_numero(50) == "50 es válido. ¡Gracias!"
    assert verificar_numero(100) == "100 es válido. ¡Gracias!"
    assert verificar_numero(101) == "El número 101 está fuera del rango permitido."
    print("Paso!")
    