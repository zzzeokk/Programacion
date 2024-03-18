# Cree una función que reciba dos números como parámetro, y muestre en
# pantalla la suma aritmética de ambos. Invoque a la función con dos números
# leídos desde teclado.

def suma_parametros(numero1, numero2):
    suma = numero1 + numero2
    print(f"{numero1} + {numero2} = {suma}")

numero1 = int(input("a: "))
numero2 = int(input("b: "))

suma_parametros(numero1, numero2)

# Modifique el script del ejercicio anterior para que la función retorne el resultado
# en vez de mostrarlo. El programa debe seguir mostrando el resultado en pantalla.

def suma_parametros(numero1, numero2):
    suma = numero1 + numero2
    return suma
    
numero1 = int(input("a: "))
numero2 = int(input("b: "))
resultado = suma_parametros(numero1, numero2)

print(f"{numero1} + {numero2} = {resultado}")

suma_parametros(numero1, numero2)

# Cree una función que reciba un string como parámetro, y retorne la cantidad de
# letras que posee. Luego, utilice la función para escribir un programa que solicite
# ingresar el nombre del usuario, y luego muestre en pantalla cuántas letras tiene
# ese nombre.

def calcular_letras(x):
    letras = len(str(x))
    return letras

nombre = input("Ingrese su nombre: ")
contar = calcular_letras(nombre)

print(f"El nombre {nombre} tiene {contar} letras.")
