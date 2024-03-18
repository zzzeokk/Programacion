# Decisiones I

def primero_mayor(numero1, numero2):
    return numero1 >= numero2

def hola_mundo(cadena):
    return cadena != "Hola Mundo"

def son_iguales(cadena1, cadena2):
    cadena1 = "hola"
    cadena2 = "HOLA"

    cad1_minus = cadena1.lower()
    cad2_minus = cadena2.lower()

    return cad1_minus == cad2_minus

# Decisiones II

def mayor_de_tres(numero3, numero4, numero5):
    if (numero3 >= numero4) and (numero3 >= numero5):
        return numero3
    elif (numero4 >= numero3) and (numero4 >= numero5):
        return numero4
    else:
        return numero5

print(mayor_de_tres(20, 20, 11))

# Decisiones III

def bloques(a, b):
    if a > b:
        print("A es mayor a B")
    elif a == b:
        print("A es igual a B")
    else:
        print("A es menor a B")

print(bloques(5, 5))

# Ejercicio Sueldos (Condiciones Anidadas)

basico = 800

if seccion == 1:
    sueldo = basico + 120
    if antiguedad < 5:
        sueldo = sueldo + (sueldo * 10) / 100
    else:
        sueldo = sueldo + (sueldo * 20) / 100
else:
    sueldo = basico + 250

# Ejercicio Sueldos (Condiciones Encadenadas)

basico = 800

if seccion == 1 and antiguedad < 5:
    sueldo = basico + 120
    sueldo = sueldo + (sueldo * 10) / 100
elif seccion == 1:
    sueldo = basico + 120
    sueldo = sueldo + (sueldo * 20) / 100
else:
    sueldo = basico + 250