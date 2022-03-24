#include <iostream>
#include <string.h>
using namespace std;
#define N 50

struct Ficha
{
    double horasTrabajadas;
    int antiguedad;
    char nombre[N];
};
double calculoImporte(struct Ficha x, double valor);



int main()
{
    double valorHora;
    double importeAcobrar;
    Ficha empleado;

    printf("ingrese los datos del empleado\n");
    printf("Nombre: ");
    scanf("%s",empleado.nombre);
    printf("Antiguedad: ");
    scanf("%d", &empleado.antiguedad);
    printf("Horas trabajadas: ");
    scanf("%lf",&empleado.horasTrabajadas);
    printf("\nAhora ingrese el valor de la Hora: ");
    scanf("%lf",&valorHora);

    importeAcobrar=calculoImporte(empleado,valorHora);
    printf("\nEl importe correspondiente a %s\nCon una antiguedad de %d anos\nes de %lf pesos",empleado.nombre,empleado.antiguedad,importeAcobrar);

    return 0;
}

void ingresarDatos(Ficha x)
{

}
double calculoImporte(Ficha x, double valor)
{
    double imp;
    if(x.antiguedad<10)
    {   imp=valor*x.horasTrabajadas;
        return imp;
    }
    if(x.antiguedad>=10)
    {
        imp=x.antiguedad*30+valor*x.horasTrabajadas;
        return imp;
    }
    else
        return -1;
}
