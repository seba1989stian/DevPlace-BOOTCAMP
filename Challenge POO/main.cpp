#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8

using namespace std;

    class password
    {
    public: //se hacen publicos los miembros que por defecto son provados
        password() //constructor por defecto
        {
            longitud = 8; //longitud de la clave es 8 por defecto

        }
        password(int largo) //constructor con argumento
        {
            longitud = largo; //Longitude determianda por el usuario
            contrasena = generarPassword(longitud); //
        }

        bool esFuerte(string s);
        string generarPassword(int larg);
        void setContrasena(string clav);//metodo para setear contraseña
        void setLongitud(int longi); //metodo para estabecer la longitud de la cotnraseña
        string getContrasena(); //idem anteriro para tomar datos de los miembros privados
        int getLongitud(); //idem anterior

    private:
        int longitud;
        string contrasena;
    };

int main()
{
    int i; //variable auxiliar
    char arr[N]; //arreglo de char auxiliar
    password clave1; //creo una variable de tipo password;

    cout<<"la longitud de la clave es: "<<clave1.getLongitud()<<endl; //vislizo el dato de la longitud de la clave con el metodo getLongitud
    cout <<"Ingrese la clave: "<<ends;

    for(i=0;i<N;i++) //se toman caracter a caracer los datos ingresados por teclado y se guardas en el arr[i]
    {
        arr[i]=getchar();
    }

    clave1.setContrasena(arr); //se accede al miembro contraseña atraves del metodo setContrasena y se establece esta última.
    cout<<"la clave : "<<clave1.getContrasena()<<" es"<<ends;
    if(clave1.esFuerte(clave1.getContrasena())==true)
    {
        cout<<" Fuerte"<<endl;
    }
    else
    cout<<" Debil"<<endl;


    return 0;
}
//metodos de Set y Get fuera de la clase//
void password::setContrasena(string clav)
{
    contrasena=clav;
}
void password::setLongitud(int longi)
{
    longitud=longi;
}
string password::getContrasena()
{
    return contrasena;
}
int password::getLongitud()
{
    return longitud;
}
//////////////////////////////////////////
string password::generarPassword(int larg)
{
    srand(time(NULL));//planto semilla para luego generar pseudo aleatoriedad con la fsc rand()
    int contador,i;
    for(i=0;i<larg;i++)
    {
        contrasena[i*rand()%10] = rand() % 10; //genero aleatoriedad en la posicion y en el contenido
    }
    for(i=0;i<larg;i++)
    {
        contrasena[i*rand()%10] ='a' + rand() % 10; //genero aleatoriedad en la posicion y en el contenido
    }
    for(i=0;i<larg;i++)
    {
        contrasena[i*rand()%10] = 'A' + rand() % 10; //genero aleatoriedad en la posicion y en el contenido
    }
    return contrasena;
} //Falta convertir la salida de caracteres
bool password::esFuerte(string s)
{
    int _mayus,_minus,_num,contador=0;

    while(s[contador] != 0) //se recorre el ASCI en busca de coincidencias de mayus y minus, y por descarte de ambas, de numeros.
    {
        if(s[contador] >= 'a' && s[contador] <= 'z')
        {
            _minus++;
            contador++;
        }
        else if (s[contador] >= 'A' && s[contador] <= 'Z')
        {
            _mayus++;
            contador++;
        }
        else
        {
            _num++;
            contador++;
        }
    }
    if(_mayus>=2 && _minus>=1 && _num>=3)
        return true;
    else
        return false;
}
