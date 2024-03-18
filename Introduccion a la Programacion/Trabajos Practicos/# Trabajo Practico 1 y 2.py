# construya una solución para implementar un programa que, dado un año
# ingresado por teclado por el usuario, calcule cuántos años tiene actualmente
# una persona nacida en ese año, y muestre el resultado en pantalla. NOTA: por
# el momento puede ignorar los pasos de Implementación y Prueba.

def calcular_edad(año_nacimiento):
    año_actual = 2023
    edad = año_actual - año_nacimiento
    return edad


año_nacimiento = int(input("Ingresar en que año naciste: "))

edad = calcular_edad(año_nacimiento)

print("La edad actual del usuario es", edad, "años.")

# Abra la consola de Python y escriba las instrucciones necesarias para mostrar el
# mensaje “HOLA MUNDO”, y luego el resultado de la operación 3 + 4.

suma = 3 + 4
print("HOLA MUNDO")
print(suma)