def cambioDolar(pesos):
    dolar = pesos / 90
    return str("Si me das {pesos} pesos, te doy {dolar:.2f} dolares")

def testCambioDolar():
    print("Testeando testCambioDolar()... ", end="")
    assert cambioDolar(90) == "Si me das 90 pesos, te doy 1 dolares"
    assert cambioDolar(0) == "Si me das 0 pesos, te doy 0 dolares"
    assert cambioDolar(180) == "Si me das 180 pesos, te doy 2 dolares"
    print("Pasó!")

def testearTodo():

    testCambioDolar()

def main():
    testearTodo()


if __name__ == "__main__":
    main()