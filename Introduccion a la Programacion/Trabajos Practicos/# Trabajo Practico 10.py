# Trabajo Practico X

# 1. Todas las variables y valores en Python tienen definido implícitamente un tipo.
# Mediante el uso de la función type(...), podemos averiguar el tipo de un dato en
# determinado momento de programa. Utilice la función type para mostrar en
# pantalla los tipos de los siguientes valores:

# 'Hola mundo' = STR
# "Hola mundo" = STR
# 100 = INT
# '100' = STR

w = 'Hola mundo'
x = "Hola Mundo"
y = 100
z = '100'

print(type(w))
print(type(x))
print(type(y))
print(type(z))

# Luego de haber determinado los tipos de los valores listados, responda:
# A) ¿De qué tipo son las cadenas de caracteres en Python?
# B) ¿Cuáles son las dos formas de escribir strings en Python? Investigue cuál
# es la diferencia entre ambas.
# C) ¿Es lo mismo que una variable tenga asignado el valor 100 a que tenga el
# valor ‘100’? ¿Cuál es la diferencia?

# A) Las cadenas de caracteres en Python son de tipo 'str'.

# B) Las dos formas de escribir strings son: Usando comillas simples o dobles la diferencia, 
# es que las dobles se usan cuando, dentro de la cadena, tambien se utilizan comillas, 
# esto puede hacer que el código sea más legible y menos propenso a errores.

# C) No, ya que 100 es un "int" (valor entero) y '100' es un "str"

# 2. Las operaciones aritméticas tradicionales tienen un comportamiento especial
# cuando las aplicamos a strings. Utilice un script de Python para responder:

# ● ¿Qué función cumple el operador + entre strings?
# ● ¿Qué función cumple el operador * entre strings?
# ● Ejecute el siguiente código y describa con sus palabras cuál es el problema:

# mi_valor = 'Hola' + 7
# print(mi_valor)

str1 = "HolaMundo"
str2 = "MundoHola"

suma = str1 + str2
print(suma)

# En el primer ejemplo, el operador + se utiliza para concatenar 
# los strings str1 y str2, resultando en el string "HolaMundo".

multiplicacion = str1 * 3
print(multiplicacion)

# En el segundo ejemplo, el operador * se utiliza entre el string str1
# y el número entero 3. Esto hace que el string "HolaMundo" se repita tres veces,
# dando como resultado el string "HolaMundoHolaMundoHolaMundo".

# Es importante tener en cuenta que el operador * solo puede ser utilizado entre un string
# y un número entero. Si se intenta utilizar con otros tipos de datos, se generará un error.

mi_valor = 'Hola' + 7
print(mi_valor)

# No se puede concatenar un string ('Hola') con un número entero (7) utilizando el operador +. 
# En Python, la concatenación con el operador + solo es válida entre dos strings.

# 3. Además de las operaciones que ya conocemos, los strings en Python tienen
# funciones predefinidas que nos facilitan su manipulación. Investigue el uso de
# cada una de las siguientes funciones, y escriba un ejemplo de su uso en un
# script de Python:

# len(string)    - string.capitalize()   - string.isnumeric()
# string.lower() - string.replace(s1,s2) - string.ispace()
# string.upper() - string.count(s1)      - string.endswith(s1)

string = "hola"

len(string)
# Retorna el numero de longitud de la palabra

string.capitalize()
# Hace que tu palabra empiece con MAYUS y las otras letras sean todas MINUS

string.isnumeric()
# Retorna True si el string es numerico y False si no lo es

string.lower()
# Te devuelve una copia del string pero convertido a MINUS

string.replace("ol","OL")
# Reemplaza toda la subcadena s1 por otra subcadena s2 dentro de una cadena de caracteres.
# Devuelve una nueva cadena de caracteres con las sustituciones realizadas.

string.isspace()
# Retorna True si la cadena está compuesta únicamente por espacios en blanco ("  ")
# y False en caso contrario ("Hola").

string.upper()
# Te devuelve una copia del string pero convertido a MAYUS

string.count("o")
# Cuenta el numero de veces que se repite la palabra o letra

string.endswith()
# Verifica si una cadena (string) termina con una subcadena específica (s1) 
# Retorna True si cadena termina con la subcadena especificada y False en caso contrario.

# 4. Como su nombre lo indica, los strings son cadenas de caracteres, es decir, una
# sucesión de símbolos. Si lo entendemos de esta manera, podemos utilizar una
# estructura iterativa, por ejemplo el for, para recorrer uno a uno los caracteres de
# un string, de la siguiente manera:

# for letra in un_string:
# # código por cada caracter

# Haga uso de esto para implementar un script que le solicite al usuario ingresar
# su nombre, y luego imprima cada una de las letras en un renglón diferente de
# la terminal.

nombre = input("Ingrese su nombre: ")
for letra in nombre:
    print(letra)

# 5. Python nos permite averiguar si determinado caracter o palabra está dentro de
# un string, mediante el uso de la palabra reservada in. La misma se utiliza de la
# siguiente manera:

# if contenido in palabra:
# # código a ejecutar si el contenido está dentro de la palabra

# Haga uso de esta funcionalidad para pedirle al usuario que ingrese una frase
# por teclado, y luego verifique si la misma contiene alguna letra ‘ñ’, y si además
# contiene la palabra ‘hola’. Informe en pantalla tanto en caso afirmativo como
# negativo.

frase = input("Ingrese una frase: ")
if "ñ" in frase and 'hola' in frase.lower():
    resultado = "Su frase contiene al menos una 'ñ' y la palabra 'hola'."
elif "ñ" in frase:
    resultado = "Su frase contiene al menos una 'ñ'"
elif "hola" in frase:
    resultado = "Su frase contiene la palabra 'hola'."
else:
    resultado = "La frase no cumple con ninguna de las condiciones."
print(resultado)

# 6. Haciendo uso de las funciones para strings que ya conoce, implemente un
# script que haga lo siguiente:

# I. Le solicite al usuario ingresar una palabra por teclado. Se debe validar que
# la palabra tenga al menos una ‘ñ’, que no sea sólo caracteres numéricos, y
# que no sean sólo espacios en blanco. En caso de no ser válida, se le debe
# pedir al usuario que la reingrese.

# II. Informe en pantalla la cantidad de letras de la palabra ingresada.

# III. Transforme la palabra a mayúsculas, reemplace todas las ‘Ñ’ por ‘N’, y
# luego muestre el resultado en pantalla.

palabra = input("Ingrese una palabra: ")
palabra_valida = False

while not palabra_valida:
    if "ñ" in palabra and not palabra.isnumeric() and not palabra.isspace():
        palabra_valida = True
    else:
        print("La palabra ingresada no es válida. Por favor, ingrésela nuevamente.")

print(len(palabra))
palabra1 = palabra.upper()
palabra2 = palabra1.replace("Ñ","N")
print(palabra2)

# 7. Escribir funciones que dada una cadena de caracteres:

# I. Imprima los dos primeros caracteres.

# II. Imprima los tres últimos caracteres.

# III. Imprimir dicha cadena en sentido inverso.

cadena = "ZZZEOK" 

def imprimir_primeros_dos_caracteres(cadena):
    print(cadena[:2])

def imprimir_ultimos_tres_caracteres(cadena):
    print(cadena[-3:])

def imprimir_cadena_inversa(cadena):
    print(cadena[::-1])

# 8. Escribir una función que reciba una cadena que contiene un largo número
# entero y devuelva una cadena con el número y las separaciones de miles. Por
# ejemplo, si recibe '1234567890', debe devolver '1.234.567.890'.

def separar_miles(numero):
    numero = str(numero)  # Convertir el número a cadena
    separado = " "
    contador = 0

    for i in range(len(numero)-1, -1, -1):
        separado = numero[i] + separado
        contador += 1

        if contador % 3 == 0 and i != 0:
            separado = "." + separado
    return separado

numero = input("Ingrese un número entero largo: ")

numero_con_separadores = separar_miles(numero)
print("Número con separación de miles:", numero_con_separadores)

# 9. Escribir funciones que dada una cadena de caracteres devuelva solamente las letras
# consonantes. Por ejemplo, si recibe 'algoritmos' debe devolver 'lgrtms'.

def consonantes(cadena1):
    consonantes = ""
    for letra in cadena1:
        if letra.isalpha() and letra.lower() not in "aeiou":
            consonantes += letra
    return consonantes

cadena1 = input("Ingrese una cadena de caracteres: ")

# 10. Escribir una función que reciba una cadena de unos y ceros (es decir, un número en
# representación binaria) y devuelva el valor decimal correspondiente.

def binario_a_decimal(x):
    decimal = int(x, 2)
    return decimal

# 1. Cree un test unitario para el ejercicio 9.

def testConsonantes():
    assert consonantes("algoritmos") == "lgrtms"
    assert consonantes("conchudo") == "cnchd"
    assert consonantes("hijodemilputa") == "hjdmlpt"
    assert consonantes("programacion") == "prgrmcn"
    assert consonantes("onichan") == "nchn"
    print("Paso!")

# 2. Cree un test unitario para el ejercicio 10.

def testBinario():
    assert binario_a_decimal("0") == 0
    assert binario_a_decimal("1") == 1
    assert binario_a_decimal("10") == 2
    assert binario_a_decimal("101") == 5
    assert binario_a_decimal("1101") == 13
    print("Paso!")