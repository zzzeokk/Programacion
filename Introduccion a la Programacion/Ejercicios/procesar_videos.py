def ingresar_videos(n):
    titulo_videos = []
    visualizaciones_videos = []
    for i in range(n):
        pregunta_1 = input("Ingrese el titulo del video: ")
        pregunta_2 = input("Ingrese las visualizaciones del video: ")
        titulo_videos.append(pregunta_1)
        visualizaciones_videos.append(pregunta_2)
    return titulo_videos, visualizaciones_videos

def procesar_videos(lista_T:list, lista_V:list):
    total_visualizaciones = 0
    argentina_campeon = False
    titulo_max_visualizaciones = ''
    max_visualizaciones = 0
    for i in range(len(lista_V)):
        total_visualizaciones += int(lista_V[i])
        if "argentina campeon 2022" in lista_T[i].lower():
            argentina_campeon = True
        
        if max_visualizaciones <= lista_V[i]:
            max_visualizaciones = lista_V[i]
            titulo_max_visualizaciones = lista_T[i]

    promedio = total_visualizaciones / len(lista_V)
    return promedio, argentina_campeon, titulo_max_visualizaciones

def main():
    ingresar_videos()
    procesar_videos()