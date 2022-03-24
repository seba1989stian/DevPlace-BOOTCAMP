#include <iostream>
#include <stdio.h>

int main()
{
    int N,i;
    int resto = 0;
    int sumatoria = 0;

    printf("Ingrese un Numero: ");
    scanf("%d",&N);

    for(i=N;i>=1;i--)
    {
        resto = N%i;
        if(resto==0)sumatoria++;
    }

    if(sumatoria==2)
        printf("\nEl numero %d ES primo\n",N);
    else
        printf("\nEl numero %d NO es primo\n",N);

    return 0;
}
