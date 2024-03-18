################################################################################################
# Nombre de archivo: hw1.py (No cambiar el nombre de este archivo)
# El repositorio donde esta tu HW1 es: github.com/unlu-edu-ar/homework-1-TuNombreDeUsuarioGithub
#
# Completa con tu nombre, apellido y DNI
# Nombre y Apellido: Gianluca Mainetti
# DNI: 45579590
################################################################################################

#################################################
# Funciones que tenés que programar
#################################################

# Cree una función que recibe un número entero N, y retorna un string de
# su valor absoluto, con el mensaje “El valor absoluto de N es |N|”.
def valorAbsoluto(x):
    resultado = abs(x)
    return f'El valor absoluto de {x} es {resultado}'

x = 10


# Cree una función que reciba su nombre de pila, y luego retorne un string
# con la cantidad de letras de ese nombre, con el mensaje “El nombre [NOMBRE]
# tiene [N] letras.”.
def contarLetrasNombre(nombre):
    x = len(nombre)
    return f'El nombre {nombre} tiene {x} letras.'

nombre = 'Maria'


# Cree una función que recibe dos números, una base y un exponente, y
# retorna el resultado de elevar el número base a la potencia exponente
def potenciacion(base, exponente):
    resultado = base ** exponente 
    return resultado

base_1 = 2
exponente_1 = 3

resultado_potencia = potenciacion(base_1, exponente_1)


# Implemente una función para calcular el perímetro de un
# rectángulo, conociendo su base y altura:
# perímetro = 2 * (base + altura)
def perimetro(base, altura):
    resultado = 2 * (base + altura)
    return resultado

base = 2
altura = 1

resultado_perimetro = perimetro(base, altura)


# Escriba una función que reciba las notas de los dos parciales de un
# alumno de la asignatura Introducción a la Programación, y retorne su promedio.
def promedioNotas(parcial1, parcial2):
    promedio = (parcial1 + parcial2) / 2
    return promedio 

parcial1 = 0
parcial2 = 10

promedioNotas(parcial1, parcial2)


# Escriba una función que reciba un monto numérico en pesos argentinos y
# retorne un string con la conversión en dólares, conteniendo la leyenda:
# "Si me das N pesos, te doy M dolares"
# Asuma un tipo de cambio U$1 = $90
def cambioDolar(pesos):
    dolar = pesos / 90
    return f"Si me das {pesos} pesos, te doy {dolar:.0f} dolares"


#################################################
# Funciones de Test (no modificar)
#################################################


def testValorAbsoluto():
    print("Testeando testValorAbsoluto()... ", end="")
    assert valorAbsoluto(10) == "El valor absoluto de 10 es 10"
    assert valorAbsoluto(-10) == "El valor absoluto de -10 es 10"
    assert valorAbsoluto(0) == "El valor absoluto de 0 es 0"
    print("Pasó!")


def testContarLetrasNombre():
    print("Testeando testContarLetrasNombre()... ", end="")
    assert contarLetrasNombre("Maria") == "El nombre Maria tiene 5 letras."
    assert contarLetrasNombre("Nicolás") == "El nombre Nicolás tiene 7 letras."
    print("Pasó!")


def testPotenciacion():
    print("Testeando testPotenciacion()... ", end="")
    assert potenciacion(2, 1) == 2
    assert potenciacion(2, 3) == 8
    assert potenciacion(2, 0) == 1
    print("Pasó!")


def testPerimetro():
    print("Testeando testPerimetro()... ", end="")
    assert perimetro(2, 1) == 6
    print("Pasó!")


def testPromedioNotas():
    print("Testeando testPromedioNotas()... ", end="")
    assert promedioNotas(2, 4) == 3
    assert promedioNotas(0, 10) == 5
    assert promedioNotas(10, 10) == 10
    print("Pasó!")


def testCambioDolar():
    print("Testeando testCambioDolar()... ", end="")
    assert cambioDolar(90) == "Si me das 90 pesos, te doy 1 dolares"
    assert cambioDolar(0) == "Si me das 0 pesos, te doy 0 dolares"
    assert cambioDolar(180) == "Si me das 180 pesos, te doy 2 dolares"
    print("Pasó!")


#################################################
# testearTodo y main
#################################################


def testearTodo():
    # comentá los tests que no querés correr!
    testValorAbsoluto()
    testContarLetrasNombre()
    testPotenciacion()
    testPerimetro()
    testPromedioNotas()
    testCambioDolar()


def main():
    testearTodo()


if __name__ == "__main__":
    main()
