# TRABAJO PRACTICO III

# Cree un script que almacene un número entero en una variable, y luego
# muestre en pantalla su valor absoluto, con el mensaje “El valor absoluto de N
# es |N|”. Finalmente, verifique que su programa funciona correctamente,
# ejecutándolo con el valor 10 en la variable (la salida debería ser 10), y luego
# con el valor -10 (la salida debería ser 10 nuevamente).

numero = -10
print(f"El valor absoluto de {numero} es {abs(numero)}")

# Cree un script que almacene su nombre de pila en una variable, y luego
# muestre en pantalla la cantidad de letras de ese nombre, con el mensaje “El
# nombre [NOMBRE] tiene [N] letras.”.

nombre = "zzzeok"
print(f"El nombre {nombre} tiene {len(nombre)} letras.")

# Cree un script que almacene, en dos variables, una base y un exponente, y
# luego muestre en pantalla el resultado de elevar el número base a la
# potencia exponente.

base = 2
exponente = 3
resultado = base ** exponente
print(resultado)

# Implemente un algoritmo en Python para calcular el perímetro de un
# rectángulo, conociendo su base y altura. Los datos se deben almacenar en
# variables, y el resultado se debe mostrar en pantalla.
# perímetro = 2 * (base + altura)

base1 = 2
altura = 1
perimetro = 2 * (base1 + altura)
print(perimetro)

# Implemente un algoritmo en Python para calcular el área de un rectángulo,
# conociendo su base y altura. Los datos se deben almacenar en variables,
# resultado se debe mostrar en pantalla.

base2 = 4
altura1 = 3
area = base2 * altura1
print(area)

# Implemente un algoritmo que intercambie los valores entre dos variables a y
# b cualquiera. Por ejemplo, si a = 10 y b = 5, luego de ejecutar el algoritmo, la
# variable a debería ser igual 5, y la variable b debería ser igual a 10.

a = 10
b = 5

auxiliar = 10
a = b
b = auxiliar

print(a, b)

# Mediante la sintaxis de asignación múltiple, investigue de qué
# se trata dicha funcionalidad, y utilízela para resolver el
# ejercicio anterior sin utilizar variables auxiliares/adicionales.

a = 10
b = 5

a, b = b, a
print(a, b)

# Escriba un algoritmo que, conociendo las notas de los dos parciales de un
# alumno de la asignatura Introducción a la Programación, muestre en
# pantalla su promedio.

parcial1 = 10
parcial2 = 4
promedio = (parcial1 + parcial2) / 2
print(promedio)

# Cree un script que, sabiendo cuántos pesos argentinos tiene una persona
# ahorrada en su cuenta (almacenando ese monto en una variable), muestre
# en pantalla los montos convertidos en dólares (U$1 = $80.5), reales ($R1 =
# $14.1), y euros (€1 = $69.5).

pesos = 50000
dolar = pesos / 80.5
reales = pesos / 14.1
euros = pesos / 69.5

print(f"Usted tiene {pesos} pesos argentinos, los cuales se convierten en:")
print("- U$" + str(dolar) + " dólares.")
print("- R$" + str(reales) + " reales.")
print("- €" + str(euros) + " euros.")