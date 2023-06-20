#include <stdio.h>
#include <string.h>

int main (){
struct persona
{
    int matriculas;
    char nombre[20];
    char direccion[50];
    char carrera[25];
    float promedio;
};
struct persona alumno1;

puts("Ingrese el nombre del estudiante");
gets(alumno1.nombre);

puts("\nIngrese la direccion");
gets(alumno1.direccion);

puts("\nIngrese la carrera");
gets(alumno1.carrera);

printf("\nIngrese el numero de matricula");
scanf("%d",&alumno1.matriculas );

printf("\nIngrese el numero el promedio");
scanf("%f",&alumno1.promedio );



printf("La matricula es: %d", alumno1.matriculas);


return 0;
}
