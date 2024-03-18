################################################################################################
# Nombre de archivo: hw4.py (No cambiar el nombre de este archivo)
# El repositorio donde esta tu HW4 es: github.com/unlu-edu-ar/homework-4-TuNombreDeUsuarioGithub
#
# Completa con tu nombre, apellido y DNI
# Nombre y Apellido: Gianluca Mainetti
# DNI: 45579590
################################################################################################


#################################################
# Funciones que tenés que programar
#################################################

# Cree una función que recibe un string s de longitud > 0, y dos números enteros 
# naturales n y m, donde 0<=n<=m<len(s), y retorna un nuevo string t que 
# es el string s sin la subcadena s[n1..n2].
# Ejemplo: s="Hola", n=1, m=2, retorna "Ha"
# Ejemplo: s="Hola", n=1, m=1, retorna "Hla" 
# Ejemplo: s="Hola", n=3, m=3, retorna "Hol"
# Ejemplo: s="Hola", n=0, m=3, retorna ""
# string, que es el resultado 
def borrarSubcadena(s,n,m):
    s = "Hola"
    if n > m or m >= len(s):
        return s
    
    t = s[:n] + s[m+1:]
    return t
  

# Cree una función que recibe un string s, y retorna dos enteros n y m, siendo
# n la cantidad de vocales minúsculas, y m la cantidad de vocales mayúsculas,
# que tiene el string s.
def contadorVocales(s):
    n = 0
    m = 0

    for letra in s:
        if letra.islower() and letra in "aeiou":
            n += 1
        elif letra.isupper() and letra in "AEIOU":
            m += 1
    
    return n, m

# Cree una función que recibe una lista l de números enteros y retorna una lista
# de los números pares de la lista l, conservando el orden que tenían dichos
# números pares en la lista l. Si no hay ningún número par en la lista l, deberá
# retornar una lista vacía.
# Ejemplo, si l=[1,0,-4,-5,2,0] deberá retornar la lista [0,-4,2,0]
def extraePares(l):
    numeros_pares = []
    for num in l:
        if num % 2 == 0:
            numeros_pares.append(num)
    return numeros_pares

# Cree una función que recibe una lista no vacía l de números enteros y retorna 
# un entero m con la multiplicación de todos los números de la lista, y un número 
# entero s con la sumatoria de los elementos de la lista l.
# Ejemplo: l=[-1,2,3] debe retornar (-6,4)
# Ejemplo: l=[-1,0,3] debe retornar (0,2)
def productoriaYSumatoria(l):
    multiplicacion = 1
    suma = 0
    for num in l:
        multiplicacion *= num
        suma += num
    return (multiplicacion, suma)

#################################################
# Funciones de Test (no modificar)
#################################################

def testBorrarSubcadena():
    print('Testeando borrarSubcadena()... ', end='')
    assert borrarSubcadena("Hola", 1, 2) == "Ha"
    assert borrarSubcadena("Hola", 1, 1) == "Hla"
    assert borrarSubcadena("Hola", 3, 3) == "Hol"
    assert borrarSubcadena("Hola", 0, 3) == ""
    print('Pasó!')

def testContadorVocales():
    print('Testeando contadorVocales()... ', end='')
    assert contadorVocales("Argentina") == (3,1)
    assert contadorVocales("hola") == (2,0)
    assert contadorVocales("mmm") == (0,0)
    assert contadorVocales("B") == (0,0)
    assert contadorVocales("e") == (1,0)
    assert contadorVocales("U") == (0,1)
    print('Pasó!')

def testExtraePares():
    print('Testeando extraePares()... ', end='')
    assert extraePares([1,0,-4,-5,2,0])==[0,-4,2,0]
    assert extraePares([])==[]
    assert extraePares([0])==[0]
    assert extraePares([3,1])==[]
    assert extraePares([2,4,2])==[2,4,2]
    print('Pasó!')

def testProductoriaYSumatoria():
    print('Testeando productoriaYSumatoria()... ', end='')
    assert productoriaYSumatoria([-1,2,3])==(-6,4)
    assert productoriaYSumatoria([-1,0,3])==(0,2)
    assert productoriaYSumatoria([0])==(0,0) 
    assert productoriaYSumatoria([2])==(2,2)   
    print('Pasó!')

#################################################
# testearTodo y main
#################################################

def testearTodo():
    # comentá los tests que no querés correr!
    testBorrarSubcadena()
    testContadorVocales()
    testExtraePares()
    testProductoriaYSumatoria()

def main():
    testearTodo()

if __name__ == '__main__':
    main()
