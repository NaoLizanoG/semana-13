#include <stdio.h>
#include <string.h>
struct persona
{
    int matriculas;
    char nombre[20];
    char direccion[50];
    char carrera[25];
    float promedio;
} alumno1, alumno2, alumno3;

struct persona resultados(struct persona alumno)
{
    printf("\nMatricula\n");
    scanf("%d", &alumno.matriculas);
    fflush(stdin);

    puts("\nNombre del estudiante");
    gets(alumno.nombre);

    fflush(stdin);

    puts("\nDireccion");
    gets(alumno.direccion);
    fflush(stdin);

    puts("\nIngrese la carrera");
    gets(alumno.carrera);
    fflush(stdin);

    printf("\nPromedio\n");
    scanf("%f", &alumno.promedio);
    fflush(stdin);

    return alumno;
}

void imprimir(struct persona alumno)
{

    printf("La matricula del estudiante es: %d\n", alumno.matriculas);
    puts("El nombre del estudiante es:");
    puts(alumno.nombre);
    puts("La direccion es:");
    puts(alumno.direccion);
    puts("La carrera es:");
    puts(alumno.carrera);
    printf("La nota promedio es: %f\n", alumno.promedio);
}

int main()
{
    printf("Ingrese los siguientes datos del estudiante 1\n");
    alumno1 = resultados(alumno1);
    printf("Ingrese los siguientes datos del estudiante 2\n");
    alumno2 = resultados(alumno2);
    printf("Ingrese los siguientes datos del estudiante 3\n");
    alumno3 = resultados(alumno3);

    printf("\nLos dato de todos los estudiantes registrados son:\n");
    printf("Datos alumno 1:\n");
    imprimir(alumno1);
    printf("Datos alumno 2:\n");
    imprimir(alumno2);
    printf("Datos alumno 3:\n");
    imprimir(alumno3);

    return 0;
}
