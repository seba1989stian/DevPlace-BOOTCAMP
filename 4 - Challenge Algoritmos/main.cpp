#include <iostream>
#include <stdlib.h>
#include <time.h>

#define N 1000

int main()
{
    int aleatorio;
    int ingreso;
    srand(time(NULL));
    aleatorio = rand()%(N+1);

    printf("Adivina el numero entre 0 y 1000: ");

    do{ scanf("%d",&ingreso);

        if(ingreso>aleatorio)
        {
            system("cls");
            printf("Ingresa un numero MENOR: ");
        }
        if(ingreso<aleatorio)
        {
            system("cls");
            printf("Ingresa un numero MAYOR: ");
        }
    }while(aleatorio!=ingreso);

    system("cls");
    printf("Acertaste, el numero es: %d",aleatorio);

    return 0;
}
