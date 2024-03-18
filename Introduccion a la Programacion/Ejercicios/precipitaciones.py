# 8. Un cliente ha solicitado un programa que le permita ingresar los mililitros de
# lluvia caídos diariamente en una semana, para que el programa le informe en
# pantalla el promedio de precipitación de esa semana. El cliente también desea
# saber cuál fue el día en que más llovió en la semana.
# A modo ilustrativo, un reporte generado por el programa debería verse como
# sigue, luego de haber leído las precipitaciones de los 7 días de la semana:

# El promedio de precipitaciones fue de XX mls. diarios.
# El día de más precipitaciones fue el xxxxxx (nombre del día).

dias_semana = ['Domingo', 'Lunes', 'Martes', 'Miércoles', 'Jueves', 'Viernes', 'Sabado']
total_lluvia = 0
mayor_lluvia = 0
dia_mayor_lluvia = ''

for i in range(7):
    mililitros = int(input("Ingrese los mililitros de lluvia para " + dias_semana[i] + ": "))
    total_lluvia += mililitros
    if mililitros > mayor_lluvia:
        mayor_lluvia = mililitros
        dia_mayor_lluvia = dias_semana[i]
promedio = total_lluvia/7
print(f"El promedio de precipitaciones fue de {promedio} mls. diarios.")
print(f"El día de más precipitaciones fue el {dia_mayor_lluvia}.")