def decimeElMes(x):
    meses = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"]
    if x >= 1 and x <= 12:
        print(meses[x-1])
    else:
        print("Mes invalido")