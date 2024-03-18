import os

def color_fav():
    print("1. Rojo")
    print("2. Verde")
    print("3. Azul")
    print("4. Salir")
    print()

def rojo():
    print("Su color favorito es 'Rojo'.")
    
def verde():
    print("Su color favorito es 'Verde'.")
    
def azul():
    print("Su color favorito es 'Azul'.")

def colores():
    opcion = None
    while opcion != "4":
        color_fav()
        opcion = input("Seleccione una opción [1-3]: ")

        if opcion == "1":
            rojo()
            esperar_confirmacion()
            os.system('cls')  
        elif opcion == "2":
            verde()
            esperar_confirmacion()
            os.system('cls')  
        elif opcion == "3":
            azul()
            esperar_confirmacion()
            os.system('cls')  
        elif opcion == "4":
            print("Hasta luego. ¡Gracias por utilizar el programa!")
        else:
            while opcion != "2":
                menu_error()
                opcion = input("Seleccione una opción [1-2]: ")

                if opcion == "1":
                    esperar_confirmacion()
                    os.system('cls')  
                    color_fav()
                elif opcion == "2":
                    print("Hasta luego. ¡Gracias por utilizar el programa!")
                else:
                    print("Opción inválida. Por favor, seleccione una opción válida.")
                    esperar_confirmacion()
                    os.system('cls')
     
def menu_error():
    print("** DATO INVÁLIDO **")
    print("1. Reintentar.")
    print("2. Salir.")
    print()

def esperar_confirmacion():
    input("Presione Enter para continuar...")

def main():
    opcion = None
    while opcion != "2":
        menu_error()
        opcion = input("Seleccione una opción [1-2]: ")

        if opcion == "1":
            print()
        elif opcion == "2":
            print("Hasta luego. ¡Gracias por utilizar el programa!")
        else:
            print("Opción inválida. Por favor, seleccione una opción válida.")
            esperar_confirmacion()
            os.system('cls') 

colores()