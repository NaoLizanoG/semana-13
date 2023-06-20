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
struct persona alumno2;
struct persona alumno3;

printf("\nIngrese el numero de matricula\n");
scanf("%d",&alumno1.matriculas );
fflush(stdin);

puts("\nIngrese el nombre del estudiante");
gets(alumno1.nombre);

fflush(stdin);

puts("\nIngrese la direccion");
gets(alumno1.direccion);
fflush(stdin);

puts("\nIngrese la carrera");
gets(alumno1.carrera);
fflush(stdin);



printf("\nIngrese el numero del promedio\n");
scanf("%f",&alumno1.promedio );
fflush(stdin);



printf("La matricula dle estudainte es: %d\n", alumno1.matriculas);
puts("El nombre del estudiante es:");
puts(alumno1.nombre);
puts("La direccion es:");
puts(alumno1.direccion);
puts("La carrera es:");
puts(alumno1.carrera);
printf("La nota promedio es: %f\n", alumno1.promedio);



return 0;
}
