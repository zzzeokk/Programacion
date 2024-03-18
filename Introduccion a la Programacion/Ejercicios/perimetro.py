def perimetro(base, altura):
    resultado = 2 * (base + altura)
    return resultado

base = 2
altura = 1

resultado_perimetro = perimetro(base, altura)

print(resultado_perimetro)

def testPerimetro():
    print("Testeando testPerimetro()... ", end="")
    assert perimetro(2, 1) == 6
    print("Pasó!")

    testPerimetro()