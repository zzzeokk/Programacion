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