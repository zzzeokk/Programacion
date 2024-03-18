def valorAbsoluto(x):
    resultado = abs(x)
    return f"El valor absoluto de {x} es {resultado}"

x = 10

def testValorAbsoluto():
    print("Testeando testValorAbsoluto()... ", end="")
    assert valorAbsoluto(10) == "El valor absoluto de 10 es 10"
    assert valorAbsoluto(-10) == "El valor absoluto de -10 es 10"
    assert valorAbsoluto(0) == "El valor absoluto de 0 es 0"
    print("Pasó!")

    testValorAbsoluto()