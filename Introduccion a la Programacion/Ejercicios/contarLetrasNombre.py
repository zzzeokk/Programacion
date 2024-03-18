def contarLetrasNombre(nombre):
    x = len(nombre)
    return f"El nombre {nombre} tiene {x} letras."

nombre = "Maria"

def testContarLetrasNombre():
    print("Testeando testContarLetrasNombre()... ", end="")
    assert contarLetrasNombre("Maria") == "El nombre Maria tiene 5 letras."
    assert contarLetrasNombre("Nicolás") == "El nombre Nicolás tiene 7 letras."
    print("Pasó!")

    testContarLetrasNombre()