def potenciacion(base, exponente):
    resultado = base ** exponente 
    return resultado

base_1 = 2
exponente_1 = 3

resultado_potencia = potenciacion(base_1, exponente_1)

print (f"El resultado de elevar el numero {base_1} a la potencia {exponente_1} es {resultado_potencia}")

def testPotenciacion():
    print("Testeando testPotenciacion()... ", end="")
    assert potenciacion(2, 1) == 2
    assert potenciacion(2, 3) == 8
    assert potenciacion(2, 0) == 1
    print("Pasó!")

    testPotenciacion()