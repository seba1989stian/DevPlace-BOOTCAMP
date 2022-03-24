#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

#define NMAX 50

int main()
{
    char contrasena[NMAX];
    char arr[NMAX];
    int i=0;

    printf("Ingrese una contrasena: ");
    scanf("%s", contrasena);

    do
    {
        system("cls");
        printf("Ingrese nuevamente su contrasena ==>  ");
        scanf("%s",arr);
        i++;

    }while(strcmp(arr,contrasena)!=0 && i<3);

    if(strcmp(arr,contrasena)==0)
        printf("\n\nFelicitaciones, recordas tu contraseña\n\n");
    else
        printf("\n\nTenes que ejercitar tu memoria\n\n");

    getch();

    return 0;
}
