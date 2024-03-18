# IMPORTANTE: No modificar ni borrar este archivo
from hw4 import borrarSubcadena,contadorVocales,extraePares,productoriaYSumatoria

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
