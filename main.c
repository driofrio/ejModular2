#include <stdio.h>
#include <string.h>

struct Fecha{
    int dia;
    int mes;
    int anio;
};

struct Persona{
    char numeroID[15];
    char nombre[50];
    char apellido[50];
    struct Fecha fechaNacimiento;
    char genero;
    float estatura;
};
struct Persona crearPersona();
void imprimirPersona(struct Persona personaImp);

int main() {
    struct Persona perIng=crearPersona();
    imprimirPersona(perIng);
    struct Fecha hoy={17,7,2023};
    int edad = hoy.anio-perIng.fechaNacimiento.anio;
    printf("Edad: %d",edad);
    return 0;
}

struct Persona crearPersona(){
    char numeroID[15];
    char nombre[50];
    char apellido[50];
    int dia,mes,anio;
    char genero;
    float estatura;
    printf("Ingrese su identificación: ");
    scanf("%s",&numeroID);
    printf("Ingrese su nombre: ");
    scanf("%s",&nombre);
    printf("Ingrese su apellido: ");
    scanf("%s",&apellido);
    printf("Ingrese su fecha de nacimiento:\n");
    printf("Dia: ");
    scanf("%d",&dia);
    printf("Mes: ");
    scanf("%d",&mes);
    printf("Año: ");
    scanf("%d",&anio);
    printf("Ingrese su género: ");
    scanf(" %c",&genero);
    printf("Ingrese su estatura: ");
    scanf("%f",&estatura);
    struct Persona nuevaPersona;
    strcpy(nuevaPersona.numeroID,numeroID);
    strcpy(nuevaPersona.nombre,nombre);
    strcpy(nuevaPersona.apellido,apellido);
    struct Fecha fechaNac={dia,mes,anio};
    nuevaPersona.fechaNacimiento=fechaNac;
    nuevaPersona.genero=genero;
    nuevaPersona.estatura=estatura;
    return nuevaPersona;
}

void imprimirPersona(struct Persona personaImp){
    printf("Identificación: %s\n",personaImp.numeroID);
    printf("Nombre: %s\n",personaImp.nombre);
    printf("Apellid: %s\n",personaImp.apellido);
    printf("Fecha nacimiento: %d/%d/%d\n",personaImp.fechaNacimiento.dia,personaImp.fechaNacimiento.mes,personaImp.fechaNacimiento.anio);
    printf("Género: %c\n",personaImp.genero);
    printf("Estatura: %f\n",personaImp.estatura);
}
