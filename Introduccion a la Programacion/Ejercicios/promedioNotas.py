def promedioNotas(parcial1, parcial2):
    promedio = (parcial1 + parcial2) / 2
    return(promedio)

parcial1 = 0
parcial2 = 10

promedioNotas(parcial1, parcial2)

def testPromedioNotas():
    print("Testeando testPromedioNotas()... ", end="")
    assert promedioNotas(2, 4) == 3
    assert promedioNotas(0, 10) == 5
    assert promedioNotas(10, 10) == 10
    print("Pasó!")

testPromedioNotas()