# Trabajo Practico VI

# 1. Cree un script que le solicite al usuario ingresar un número por teclado, y
# luego le informe en pantalla si su número es mayor que 10; antes de finalizar
# e independientemente de lo que haya sucedido antes, el script mostrará un
# mensaje de despedida. Ejemplos de cómo debería verse la salida del script:
# Tu número (N) es mayor que 10!
# Saludos!

def MayorQue10(n):
    n = int(input("Ingrese un numero: "))
    if n > 10:
        print(f"Tu número {n} es mayor que 10!")
        print("Saludos!")
    else:
        print("Saludos!")

# 2. Modifique el script anterior para que mantenga el funcionamiento, pero
# ahora, cuando el número no es mayor que 10, también se muestre un
# mensaje “Tu número (N) es menor o igual que 10!”.

def Mayor_MenorQue10(n):
    n = int(input("Ingrese un numero: "))
    if n > 10:
        print(f"Tu número {n} es mayor que 10!")
        print("Saludos!")
    else:
        print(f"Tu número {n} es menor o igual que 10!")
        print("Saludos!")

# 3. Cree un script que le solicite al usuario ingresar dos números por teclado, y
# luego indique por pantalla cuál de ellos es el mayor. Contemple la posibilidad
# de que los números sean iguales, y muestre un mensaje acorde.

def Cual_es_mayor(x,y):
    x = int(input("Ingrese el primer numero: "))
    y = int(input("Ingrese el segundo numero: "))
    if x > y:
        resultado = "El numero {x} es mayor al numero {y}"
    elif y > x:
        resultado = "El numero {y} es mayor al numero {x}"
    else:
        resultado = "Los numeros son iguales"
    return resultado


# 4. Cree un script que le solicite al usuario ingresar un número por teclado, y le
# informe con un mensaje si su número es positivo, negativo, o 0.

def que_numero_es(x):
    x = int(input("Ingrese un numero: "))
    if x > 0:
        resultado = "Su numero es positivo"
    elif x < 0:
        resultado = "Su numero es negativo"
    else:
        resultado = "Su numero es 0"

# 5. Cree un script que, dado un número de día de la semana ingresado por
# teclado, muestre el nombre de ese día en lenguaje natural. La relación entre
# números y días de la semana es la siguiente:

def dias_semana(dia):
    num = int(input("Ingresar un numero del 1 al 7: "))
    if num == 1:
        dia = "Domingo."
    elif num == 2:
        dia = "Lunes."
    elif num == 3:
        dia = "Martes."
    elif num == 4:
        dia = "Miercoles."
    elif num == 5:
        dia = "Jueves."
    elif num == 6:
        dia = "Viernes."
    elif num == 7:
        dia = "Sabado."
    else:
        dia = "Dia Invalido"
    return dia
    
# 6. Cree un script que le solicite a un alumno de la asignatura Introducción a la
# Programación que ingrese las notas de sus dos parciales. Como resultado, se
# le debe informar al alumno su situación, junto con la nota promedio. Las
# reglas para saber la situación de un alumno son las siguientes:

# ● Para estar promovido (es decir, cursada aprobada y no requiere
# rendir final), el alumno debe haber aprobado ambos parciales y
# tener un promedio mayor o igual a 8.

# ● Para estar regular (cursada aprobada, pero debe rendir final), el
# alumno debe haber aprobado ambos parciales (nota mayor o igual
# a 4).

# ● Si el alumno no ha aprobado ambos parciales (es decir, tiene nota
# menor que 4 en alguno de ellos), entonces queda en condición de
# libre (es decir, puede rendir un final extendido o recursar).

def situacion_alumnos(nota1, nota2):
    nota1 = int(input("Ingrese la nota de su primer parcial: "))
    nota2 = int(input("Ingrese la nota de su segundo parcial: "))
    promedio = nota1 + nota2 / 2
    if nota1 > 4 and nota2 > 4 and promedio >= 8:
        situacion = "Estas provomido"
    elif nota1 >= 4 and nota2 >= 4 and promedio < 8:
        situacion = "Estas aprobado, pero tenes que rendir final"
    else:
        situacion = "Quedaste libre"
    return situacion
        
# 7. Cree un script que determine si un triángulo es isósceles, equilátero, o
# escaleno. Para determinar esto, se le solicitará al usuario ingresar tres
# números, correspondientes a los tres lados del triángulo.

# equilátero = todos los lados iguales
# isósceles = dos lados iguales
# escaleno = todos los lados diferentes

def tipo_triangulo(a,b,c):
    a = int(input("Ingrese el primer numero: "))
    b = int(input("Ingrese el segundo numero: "))
    c = int(input("Ingrese el tercer numero: "))
    if a == b == c:
        tipo = "El triangulo es de tipo Equilatero"
    elif a == b or a == c or b == c:
        tipo = "El triangulo es de tipo Isosceles"
    else:
        tipo = "El triangulo es de tipo Escaleno"
    return tipo

# 8. Las estructuras alternativas pueden utilizarse para validar datos. Por
# ejemplo, si se intenta crear una función que tome dos enteros como
# parámetro y muestre el resultado de su división, puede ocurrir un error si el
# denominador es cero. 

# Utilice la estructura alternativa para validar que el
# denominador no sea cero; en caso de serlo, la función deberá mostrar el
# mensaje “No se puede dividir por 0!” en lugar de intentar mostrar el resultado.

def dividir_por_cero(numerador,denominador):
    numerador = int(input("Ingrese un numero: "))
    denominador = int(input("Ingrese otro numero: "))
    if denominador == 0:
        resultado = "No se puede dividir por 0!"
    else:
        division = numerador / denominador
        resultado = division
    return resultado
    
# Python ofrece algunas funciones built-in para facilitar la implementación de
# validaciones. A continuación se listan algunas de las más comunes:

# valor.isdigit()
# Retorna True si todos los caracteres de valor son numéricos, False en caso
# contrario.

# valor.isalpha()
# Retorna True si todos los caracteres de valor son alfabéticos (no
# numéricos), False en caso contrario.

# valor.isalnum()
# Retorna True si valor es una combinación alfanumérica (caracteres y
# números), False en caso contrario.

# 9. Codifique una función que reciba un parámetro cualquiera proveniente del
# usuario del programa (que puede contener letras, números, o una combinación
# de ambas), e indique si el mismo es un número, una palabra, o un valor
# alfanumérico. Compruebe que su función resuelve el problema enviándole
# valores correspondientes a las tres posibilidades.

def tipo_parametro(parametro):
    parametro = input("Ingrese cualquier cosa: ")
    if parametro.isdigit() == True:
        resultado = "Todos los caracteres son numericos"
    elif parametro.isalpha() == True:
        resultado = "Todos los caracteres son alfabeticos"
    else:
        resultado = "Los caracteres estan compuestos por una combinacion alfanumerica"
    return resultado

# 10. Cree un test unitario para el ejercicio 9. El test debe contemplar los casos de
# ingreso por parámetro de:
# ● Un valor numérico
# ● Un valor alfabético
# ● Un valor alfanumérico

def testTipo_parametro():
    assert tipo_parametro("Hola Mundo") == "Todos los caracteres son numericos"
    assert tipo_parametro("2458") == "Todos los caracteres son alfabeticos"
    assert tipo_parametro("Hola2458") == "Los caracteres estan compuestos por una combinacion alfanumerica"
    print('Pasó!')