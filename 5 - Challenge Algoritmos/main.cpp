#include <iostream>

int _Mayor(int xIngreso,int xMayor);
int _Menor(int xIngreso,int xMenor);

int main()
{
    int ingreso,mayor,menor,i=0,sumatoria=0;

    printf("Ingrese un numero repetidamente.\nFInaliza el ingreso de numeros con -1\n\n");
    do
    {
        if(i==0)
        {
            scanf("%d",&ingreso);
            mayor=ingreso;
            menor=ingreso;
            i++;
        }
        else
        {
            mayor = _Mayor(ingreso,mayor);
            menor = _Menor(ingreso,menor);
            sumatoria=sumatoria+ingreso;
            scanf("%d",&ingreso);
        }
    }while(ingreso!=-1);

    printf("\n\nMayor: %d\nMenor: %d\nSumatoria: %d\n",mayor,menor,sumatoria);

    return 0;
}

int _Mayor(int xIngreso,int xMayor)
{
    if(xIngreso>=xMayor)
        return xIngreso;
    else
        return xMayor;
}

int _Menor(int xIngreso,int xMenor)
{
    if(xIngreso<=xMenor)
        return xIngreso;
    else
        return xMenor;
}
