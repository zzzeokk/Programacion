def numeros_alfa(x):
    if dato.isdigit()==True:
        x=("Su dato son letras.")
    elif dato.isalpha()==True:
        x=("Su valor es alfabetico.")
    elif dato.isalnum()==True:
        x=("Su valor es alfanumerico.")
        return x
    
    valor = input("Ingrese un valor, ya sea Numero, Alfabetico o Alfanumerico: ")

    llamo = numeros_alfa(valor)
    print(llamo)