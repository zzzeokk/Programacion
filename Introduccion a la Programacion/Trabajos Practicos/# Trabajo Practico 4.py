# Cree un script que, al ejecutarlo, le solicite al usuario ingresar su nombre de
# pila, luego lo salude y calcule la cantidad de letras del nombre, mostrando
# el mensaje “Hola, [NOMBRE], tu nombre tiene [N] letras.”.


nombre = input("Ingresar su nombre de pila aqui: ")
print(f"Hola, {nombre}, tu nombre tiene {len(nombre)} letras.")

# Cree un script que lea dos números enteros por teclado, y luego muestre en
# pantalla el resultado de la suma entre ellos.

numero1 = int(input("Ingrese un numero: "))
numero2 = int(input("Ingrese otro numero: "))

suma = numero1 + numero2
print(suma)

# Cree un script que muestre en pantalla el perímetro de un rectángulo,
# leyendo su base y altura desde teclado. perímetro = 2 * (base + altura).

base = int(input("Base: "))
altura = int(input("Altura: "))
perimetro = 2 * (base + altura)
print(perimetro)

# Cree un script que le solicite a un alumno ingresar su apellido, la nota del
# primer parcial, y la nota del segundo parcial. Finalmente, se debe mostrar
# un reporte con la siguiente información:

apellido = input("Ingrese su apellido: ")
parcial1 = int(input("Ingrese la nota del primer parcial: "))
parcial2 = int(input("Ingrese la nota del segundo parcial: "))
promedio = (parcial1 + parcial2) / 2

print(f"Alumno {apellido}:")
print(f"- Primer Parcial: {parcial1}.")
print(f"- Segundo Parcial: {parcial2}.")
print(f"- Promedio {promedio}.")

# Cree un script que lea dos números de teclado (una base y un exponente) y
# luego muestre en pantalla el resultado de elevar el número base a la
# potencia exponente.

base = int(input("Base: "))
exponente = int(input("Exponente: "))
resultado =  base ** exponente
print(resultado)
