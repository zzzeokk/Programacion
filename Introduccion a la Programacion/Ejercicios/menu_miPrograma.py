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