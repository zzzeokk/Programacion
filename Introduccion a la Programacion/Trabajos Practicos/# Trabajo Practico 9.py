# Trabajo Practico IX

# 1. Cree un script que le solicite al usuario ingresar una temperatura en grados
# Celsius, y valide que la entrada es correcta, teniendo en cuenta que la
# temperatura debe ser un valor numérico, y el rango válido está entre -18 y 50. El
# programa debe permitir reingresar el dato cuantas veces sea necesario, hasta
# que el usuario provea un dato válido. Procure informar al usuario cuando su
# dato es inválido, y cuáles son los valores aceptados.

temperatura = None

while temperatura is None or not (-18 <= temperatura <= 50):
    gradosC = input("Ingrese la temperatura actual en Grados Celcius: ")
    if gradosC.startswith('-') and gradosC[1:].isdigit():
        temperatura = float(gradosC)
        if not (-18 <= temperatura <= 50):
            print("La temperatura debe estar en el rango válido de -18 a 50.")
    elif gradosC.isdigit():
        temperatura = float(gradosC)
        if not (-18 <= temperatura <= 50):
            print("La temperatura debe estar en el rango válido de -18 a 50.")
    else:
        print("La entrada debe ser un valor numérico.")
    
print(gradosC, "es la temperatura actual. ¡Gracias!")

# 2. Cree un script que le solicite al usuario ingresar su edad. Verifique que el dato
# ingresado sea válido, teniendo en cuenta que la edad es un número entero, y el
# rango válido para este programa es de 18 a 60 años. El programa debe solicitar
# el reingreso de manera indefinida, hasta que el dato sea correcto.

edad = None

while edad is None or not (18 <= edad <= 60):
    entrada = input("Ingrese su edad aqui: ")
    if entrada.isdigit():
        edad = int(entrada)
        if not (18 <= edad <= 60):
            print("El rango válido de edad es de 18 a 60 años.")
    else:
        print("La entrada debe ser un valor numérico.")
    
print("Gracias por Ingresar su edad")

# 3. Modifique todos los ejercicios anteriores para que en lugar de permitir el
# reintento de manera ilimitada, el programa permita sólo 10 reintentos. Si el
# usuario supera el límite de reintentos, el programa debe terminar con el
# mensaje “Usted está jugando conmigo, yo me retiro”.

# 1.

contador = 0
temperatura = None

while contador < 10 and (temperatura is None or not (-18 <= temperatura <= 50)):
    entrada = input("Ingrese una temperatura en grados Celsius: ")
    if entrada.isdigit() or (entrada.startswith('-') and entrada[1:].isdigit()):
        temperatura = float(entrada)
        if not (-18 <= temperatura <= 50):
            print("La temperatura debe estar en el rango válido de -18 a 50.")
    else:
        print("La entrada debe ser un valor numérico.")
    contador += 1

if contador == 10:
    print("Usted está jugando conmigo, yo me retiro.")
else:
    print("La temperatura ingresada es:", temperatura)

# 2.

contador = 0
edad = None

while contador < 10 and (edad is None or not (18 <= edad <= 60)):
    entrada = input("Ingrese su edad aqui: ")
    if entrada.isdigit():
        edad = int(entrada)
        if not (18 <= edad <= 60):
            print("El rango válido de edad es de 18 a 60 años.")
    else:
        print("La entrada debe ser un valor numérico.")
    contador += 1

if contador == 10:
    print("Usted está jugando conmigo, yo me retiro.")
else:
    print("La edad ingresada es:", edad)

# 4. La técnica de validación para un conjunto específico de valores se puede utilizar
# para construir menús de opciones. Construya un menú que le muestre al
# usuario lo siguiente:

# - Cuando el usuario ingrese la opción 1, se mostrará el mensaje “Hola,
# bienvenido a mi programa interactivo!”.

# - Cuando el usuario ingrese la opción 2, se mostrará el mensaje “Hay una
# sensación térmica de 20 grados Celsius.”.

# - Cuando el usuario ingrese la opción 3, se mostrará el mensaje “Estás en la
# materia Introducción a la Programación!”.

# - Cuando el usuario ingrese la opción 4, el programa debe terminar,
# mostrando el mensaje “Hasta la próxima!”.

# - Si el usuario ingresa una opción inválida, se muestra el mensaje “Opción
# inválida.”.

import os

def mostrar_menu():
    print("********* MI PROGRAMA *********")
    print("1. Saludar.")
    print("2. Informar temperatura.")
    print("3. Mostrar nombre de materia.")
    print("4. Salir.")
    print()

def saludar():
    print("Hola, bienvenido a mi programa interactivo!.")

def informar_temp():
    print("Hay una sensación térmica de 20 grados Celsius.")

def mostar_nombre_materia():
    print("Estás en la materia Introducción a la Programación!.")

def main():
    opcion = None
    while opcion != "4":
        mostrar_menu()
        opcion = input("Seleccione una opción [1-4]: ")

        if opcion == "1":
            saludar()
            os.system('cls')
        elif opcion == "2":
            informar_temp()
            os.system('cls')
        elif opcion == "3":
            mostar_nombre_materia()
            os.system('cls')
        elif opcion == "4":
            print("Hasta la próxima!.")
        else:
            print("Opción inválida.")
            os.system('cls')  

# 5. Cree un script que le solicite al usuario ingresar cuál es su color favorito,
# limitando las opciones a rojo, verde, y azul. Aclaraciones:

# - Puede asumir que el usuario ingresará los strings en minúsculas.
# Opcionalmente, puede investigar el uso de las funciones upper() y lower()
# para transformar la entrada a mayúsculas o minúsculas y evitar así
# posibles errores de validación por este detalle.

# - Al validar entre un conjunto de opciones prefijadas (en lugar de hacerlo en
# un rango), es posible que no sea necesario validar el tipo del dato
# ingresado por teclado.

# - Al detectar un dato inválido, el programa debe darle las siguientes
# opciones al usuario:

# ** DATO INVÁLIDO **
# 1. Reintentar.
# 2. Salir.

# - La opción 1. Reintentar le permite al usuario reingresar el dato de manera
# indefinida, siempre mostrando las opciones ante cada intento fallido.

# - La opción 2. Salir finaliza el programa.

color_valido = False

while not color_valido:
    color = input("Ingrese su color favorito (rojo, verde, azul): ").lower()

    if color == "rojo":
        print("¡Excelente elección! El rojo es un color vibrante.")
        color_valido = True
    elif color == "verde":
        print("¡Genial! El verde es un color muy refrescante.")
        color_valido = True
    elif color == "azul":
        print("¡Muy bien! El azul es un color calmante y relajante.")
        color_valido = True
    else:
        print("** DATO INVÁLIDO **")
        print("1. Reintentar.")
        print("2. Salir.")
        opcion = input("Ingrese su elección (1 o 2): ")

        if opcion == "2":
            color_valido = True

# 6. Al implementar programas interactivos, es normal que la pantalla se llene de
# texto, en detrimento de la experiencia de usuario. Para solucionar este
# inconveniente, Python nos provee una función para limpiar la pantalla (notar
# que esto no tendrá ningún efecto sobre la lógica del programa, simplemente
# dejará la terminal de comandos en blanco). El uso de esta función depende del
# sistema operativo que esté utilizando, pero para empezar deberá importar el
# módulo os, escribiendo la siguiente línea al comienzo de su script:

# import os

# Una vez importado el módulo os, ya podrá utilizar la función para limpiar la
# pantalla en cualquier punto de su programa.

# os.system('cls')

# Modifique todos los ejercicios de este TP para que cada vez que se reintente
# una entrada o se muestre un menú de opciones, la pantalla esté limpia.

def esperar_confirmacion():
    input("Presione Enter para continuar...")

# 1

import os

temperatura = None

while temperatura is None or not (-18 <= temperatura <= 50):
    gradosC = input("Ingrese la temperatura actual en Grados Celcius: ")
    if gradosC.startswith('-') and gradosC[1:].isdigit():
        temperatura = float(gradosC)
        if not (-18 <= temperatura <= 50):
            print("La temperatura debe estar en el rango válido de -18 a 50.")
            esperar_confirmacion()
            os.system('cls')
    elif gradosC.isdigit():
        temperatura = float(gradosC)
        if not (-18 <= temperatura <= 50):
            print("La temperatura debe estar en el rango válido de -18 a 50.")
            esperar_confirmacion()
            os.system('cls')
    else:
        print("La entrada debe ser un valor numérico.")
        esperar_confirmacion()
        os.system('cls')
    
print(gradosC, "es la temperatura actual. ¡Gracias!")

# 1. Rehaga el ejercicio 5 (color favorito) considerando los siguientes puntos:

# ● Cree la función color_favorito, que deberá recibir como parámetro un string s y
# validar si ese string coincide con alguna de las opciones. Deberá retornar True si
# es valido y False en caso contrario

# ● Omita el ingreso por teclado, sino que el valor deberá entrar como parámetro de
# la función.
def color_favorito(s):
    if s == "rojo":
        color_valido = True
    elif s == "verde":
        color_valido = True
    elif s == "azul":
        color_valido = True
    else:
        color_valido = False
    return color_valido

def testColor_favorito():
    assert color_favorito("rojo") == True
    assert color_favorito("verde") ==True
    assert color_favorito("azul") == True
    assert color_favorito("blanco") == False
    assert color_favorito("negro") == False
    print("Paso!")