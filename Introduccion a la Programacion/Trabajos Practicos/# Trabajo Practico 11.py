# Trabajo Practico XI

# 1. Diseñe una función que reciba una lista, vacía o no, e incorpore números hasta que
# el usuario ingrese el valor “salir”. Cuando termina de ingresar los datos, la
# función debe retornar la lista al programa principal.
lista = []
numero = input("Ingrese numeros en la lista: ")
while numero != "salir":
    lista.append(numero)
    numero = input("Ingrese numeros en la lista (Ingrese 'salir' para salir): ")
print(lista)

# 2. Dada una lista de números enteros, escribir una función para cada uno de los
# siguientes ítems:

# a- Devuelva una lista con todos los números que sean primos.
# b- Devuelva la sumatoria y el promedio de los valores.
# c- Devuelva una lista con el factorial de cada uno de esos números.

# 3. Dada una lista de números enteros y un entero k, escribir una función para
# cada uno de los siguientes ítems:

# a- Devuelva tres listas, una con los menores, otra con los mayores y otra con los
# iguales a k.

# b- Devuelva una lista con aquellos que son múltiplos de k.

lista = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]

def tres_listas(lista, k):
    menores = []
    mayores = []
    iguales = []
    for numero in lista:
        if k > numero:
            menores.append(numero)
        elif k < numero:
            mayores.append(numero)
        else:
            iguales.append(numero)
    return menores, mayores, iguales
        
def obtener_multiplos(lista, k):
    multiplos = []
    for numero in lista:
        if numero % k == 0:
            multiplos.append(numero)
    return multiplos

# 4. Realizar una función que, dada una lista, devuelva una nueva lista 
# cuyo contenido sea igual a la original pero invertida:
# Ejemplo: L1=['Di', 'buen', 'día', 'a', 'papa'] 
# devolverá ['papa', 'a', 'día', 'buen', 'Di']

lista = ['huevos', 'los', 'comes', 'me', 'no', 'Porque'] 

def invertir_lista(lista):
    return lista[::-1]

# 5. Modificar el ejercicio anterior para que en lugar de devolver una nueva lista,
# modifique la lista dada para invertirla. Usar listas auxiliares.

lista = ['huevos', 'los', 'comes', 'me', 'no', 'Porque'] 

def invertir_lista_aux(lista):
    lista_auxiliar = lista.copy()
    longitud = len(lista)
    
    for i in range(longitud):
        lista[i] = lista_auxiliar[longitud - i - 1]

# 6. Escribir una función que reciba una cadena a buscar y una lista de nombres
# de personas y busque dentro de la lista, todas los elementos que contengan esa
# cadena o cualquier parte de ella. Debe devolver una lista con los elementos
# encontrados.

def buscar_cadena(cadena, lista):
    elementos = []
    cadena = cadena.lower()
    for nombre in lista:
        nombre = nombre.lower()
        if cadena in lista:
            elementos.append(nombre)
    return elementos



